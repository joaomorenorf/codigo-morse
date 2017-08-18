
int LED = 7;

char codigo[] = "sos";
int contador = 0;

void setup ( ) {
  pinMode(LED, OUTPUT);
}

void loop ( ) {
  if (codigo[contador] == 's') { //S
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  
    delay(200);
  }
  
  if (codigo[contador] == 'o') { //O
    digitalWrite(LED, HIGH);
    delay(600);
    digitalWrite(LED, LOW);
    delay(200);
  
    digitalWrite(LED, HIGH);
    delay(600);
    digitalWrite(LED, LOW);
    delay(200);
  
    digitalWrite(LED, HIGH);
    delay(600);
    digitalWrite(LED, LOW);
    delay(200);
    delay(200);

  }
  
  contador++;
  
  if (codigo[contador] == '\0') { //FIM
    contador = 0;
    delay(2000);
    
  }
}
