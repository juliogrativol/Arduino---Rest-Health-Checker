
byte seven_seg_digits[7][7] = {  {  1,0,0,1,1,0,1 },  // = Digito C
                                 {  1,1,1,1,1,0,1 },  // = Digito D
                                 {  1,0,0,1,1,1,1 },  // = Digito E
                                 {  1,0,0,0,1,1,1 },  // = Digito F
                                 {  1,0,1,1,1,1,1 },  // = Digito G
                                 {  1,1,1,0,1,1,1 },  // = Digito A
                                 {  1,1,1,1,1,1,1 },  // = Digito B
                                 };

void setup() {
  pinMode(11,OUTPUT); //Pino do buzzer
  pinMode(12,OUTPUT); //Pino do buzzer
  pinMode(2, OUTPUT); //Pino 2 do Arduino ligado ao segmento A  
  pinMode(3, OUTPUT); //Pino 3 do Arduino ligado ao segmento B
  pinMode(4, OUTPUT); //Pino 4 do Arduino ligado ao segmento C
  pinMode(5, OUTPUT); //Pino 5 do Arduino ligado ao segmento D
  pinMode(6, OUTPUT); //Pino 6 do Arduino ligado ao segmento E
  pinMode(7, OUTPUT); //Pino 7 do Arduino ligado ao segmento F
  pinMode(8, OUTPUT); //Pino 8 do Arduino ligado ao segmento G
  pinMode(9, OUTPUT); //Pino 9 do Arduino ligado ao segmento PONTO
  writePonto(0);  // Inicia com o ponto desligado

}

void writePonto(byte dot){   //Funcao que aciona o ponto no display
  
  digitalWrite(9, dot);
  
}

void sevenSegWrite(byte digit)  //Funcao que aciona o display
{
  byte pin = 2;

  //Percorre o array ligando os segmentos correspondentes ao digito
  for (byte segCount = 0; segCount < 7; ++segCount)  
  { 
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
    writePonto(1);  //Liga o ponto
    delay(100);   //Aguarda 100 milisegundos
    writePonto(0);  //Desliga o ponto
}


void loop() {
  
    delay(2000);
    
    tone(11,262,100); //DO
    sevenSegWrite(0);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,294,100); //RE
    sevenSegWrite(1);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);

    
    delay(200);
    tone(11,330,100); //MI
    sevenSegWrite(2);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,262,100); //DO
    sevenSegWrite(0);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,294,100); //RE
    sevenSegWrite(1);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);   
    tone(11,262,100); //DO]
    sevenSegWrite(0);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,294,100); //RE
    sevenSegWrite(1);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,294,100); //RE
    sevenSegWrite(1);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,294,100); //RE
    sevenSegWrite(1);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,262,100); //DO
    sevenSegWrite(0);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,392,200); //SOL
    sevenSegWrite(4);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,330,100); //MI
    sevenSegWrite(2);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,330,100); //MI
    sevenSegWrite(2);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,330,100); //MI
    sevenSegWrite(2);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,262,100); //DO
    sevenSegWrite(0);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,294,100); //RE
    sevenSegWrite(1);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,330,100); //MI
    sevenSegWrite(2);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(200);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
    tone(11,349,100); //FA
    sevenSegWrite(3);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(12, LOW);
    
    delay(300);
}