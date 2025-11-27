// --- CONFIGURAÇÃO DE PINOS --- //
int leds[4]    = {10, 11, 12, 13};   // LEDs
int botoes[4]  = {2, 3, 4, 5};       // Botões
int notas[4]   = {261, 294, 329, 349}; // Notas do buzzer
int buzzer = 6;

// --- VARIÁVEIS DO JOGO --- //
int sequencia[100];
int nivel = 0;
int indice_jogador = 0;
int estado = 0;   // 0=sorteia, 1=repete, 9=erro, 10=reinicia

void setup() {
  Serial.begin(9600);

  // Configura LEDs
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }

  // Configura botões
  for (int i = 0; i < 4; i++) {
    pinMode(botoes[i], INPUT_PULLUP);  // Usando PULLUP
  }

  pinMode(buzzer, OUTPUT);

  randomSeed(analogRead(A0));
}

void loop() {
  switch (estado) {
    case 0: sorteia(); break;
    case 1: repete(); break;
    case 9: erro(); break;
    case 10: reinicia(); break;
  }
}

//
// --- ESTADO 0: GERA NOVO PASSO DA SEQUÊNCIA --- //
void sorteia() {
  int novo = random(0, 4);   // novo LED (0..3)
  sequencia[nivel] = novo;
  nivel++;

  // Mostra a sequência inteira
  for (int i = 0; i < nivel; i++) {
    int l = sequencia[i];
    acendeLED(l);
    delay(300);
    apagaLED(l);
    delay(150);
  }

  indice_jogador = 0;
  estado = 1;  // ir para leitura do jogador
}

//
// --- ESTADO 1: JOGADOR REPETE A SEQUÊNCIA --- //
void repete() {
  int botao = leBotao();

  if (botao != -1) {  // Algum botão foi pressionado
    acendeLED(botao);
    tone(buzzer, notas[botao], 180);
    delay(250);
    apagaLED(botao);

    if (botao == sequencia[indice_jogador]) {
      indice_jogador++;

      if (indice_jogador == nivel) {
        delay(500);  // jogador acertou o nível
        estado = 0;  // sortear o próximo
      }
    } else {
      estado = 9; // ERRO!
    }
  }
}

//
// --- FUNÇÃO PARA LER BOTÕES (com de-bounce simples) --- //
int leBotao() {
  while (true){
    if (digitalRead(botoes[0]) == HIGH){
      	return 0;
    }
    if (digitalRead(botoes[1]) == HIGH){
		return 1;
    }	
    if (digitalRead(botoes[2]) == HIGH){
		return 2;
    }if (digitalRead(botoes[3]) == HIGH)
		return 3;
  }
  return -1;
};
//
// --- ESTADO 9: SOM + ANIMAÇÃO DE ERRO --- //
void erro() {
  tone(buzzer, 120, 800);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++)
      digitalWrite(leds[j], HIGH);
    delay(200);

    for (int j = 0; j < 4; j++)
      digitalWrite(leds[j], LOW);
    delay(200);
  }

  estado = 10;
}

//
// --- ESTADO 10: REINICIA JOGO --- //
void reinicia() {
  nivel = 0;
  indice_jogador = 0;
  delay(800);
  estado = 0;
}

//
// --- FUNÇÕES AUXILIARES --- //
void acendeLED(int i) {
  digitalWrite(leds[i], HIGH);
}

void apagaLED(int i) {
  digitalWrite(leds[i], LOW);
}
