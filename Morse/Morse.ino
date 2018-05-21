
// Pino do LED
int LED = 7;

// Mensagem que será transmitida
char codigo[] = "sos";

// Variáveis para calibração
int toque_curto = 200;
int toque_longo = 600;
int tempo_e_toques = 200;
int entre_letras = 200;
int tempo_espaco = 1000;
int fim_mensagem = 2000;

int contador = 0;

void setup () {
    pinMode(LED, OUTPUT);
}

void curto () {
    digitalWrite(LED, HIGH);
    delay(toque_curto);
    digitalWrite(LED, LOW);
    delay(tempo_e_toques);
}

void longo () {
    digitalWrite(LED, HIGH);
    delay(toque_longo);
    digitalWrite(LED, LOW);
    delay(tempo_e_toques);
}

void loop () {
    if      (codigo[contador] == 'a') { //A
        curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'b') { //B
        longo(); curto(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'c') { //C
        longo(); curto(); longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'd') { //D
        longo(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'e') { //E
        curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'f') { //F
        curto(); curto(); longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'g') { //G
        longo(); longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'h') { //H
        curto(); curto(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'i') { //I
        curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'j') { //J
        curto(); longo(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'k') { //K
        longo(); curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'l') { //L
        curto(); longo(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'm') { //M
        longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'n') { //N
        longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'o') { //O
        longo(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'p') { //P
        curto(); longo(); longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'q') { //Q
        longo(); longo(); curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'r') { //R
        curto(); longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 's') { //S
        curto(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == 't') { //T
        longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'u') { //U
        curto(); curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'v') { //V
        curto(); curto(); curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'w') { //W
        curto(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'x') { //X
        longo(); curto(); curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'y') { //Y
        longo(); curto(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == 'z') { //Z
        longo(); longo(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == ' ') { //(ESPAÇO)
        delay(tempo_espaco);
    }
    else if (codigo[contador] == '0') { //0
        longo(); longo(); longo(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == '1') { //1
        curto(); longo(); longo(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == '2') { //2
        curto(); curto(); longo(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == '3') { //3
        curto(); curto(); curto(); longo(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == '4') { //4
        curto(); curto(); curto(); curto(); longo();
        delay(entre_letras);
    }
    else if (codigo[contador] == '5') { //5
        curto(); curto(); curto(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == '6') { //6
        longo(); curto(); curto(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == '7') { //7
        longo(); longo(); curto(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == '8') { //8
        longo(); longo(); longo(); curto(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == '9') { //9
        longo(); longo(); longo(); longo(); curto();
        delay(entre_letras);
    }
    else if (codigo[contador] == '\0') { //FIM
        contador = -1;
        delay(fim_mensagem);
    }
    contador++;
}
