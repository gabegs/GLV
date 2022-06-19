#include <Boards.h>
#include <Firmata.h>
#include <FirmataConstants.h>
#include <FirmataDefines.h>
#include <FirmataMarshaller.h>
#include <FirmataParser.h>

//Programa: Óculos inteligente
//Autor: GLV
 
int pino_D0 = 7;
int valor_d = 0;
int aux = 0;
int tempo = 1000;
int frequencia = 0;
int pino_buzzer = 10;
 
void setup() {
  Serial.begin(9600);
  pinMode(pino_D0, INPUT);
  pinMode(pino_buzzer, OUTPUT);
}
 
void loop() {
  int valor_d = digitalRead(pino_D0);

  Serial.println(valor_d);
 
  if (valor_d != 1) {
    //Serial.println("Você dormiu!!!");
    for (aux=0;aux<=1;aux++) {
      frequencia = 1000;
      tone(pino_buzzer, frequencia, tempo);
      delay(100);
      frequencia = 2000;
      tone(pino_buzzer, frequencia, tempo);
      delay(100);
    }
  }
}
