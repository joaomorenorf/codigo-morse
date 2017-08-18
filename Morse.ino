
// Pino do LED
int LED = 7;

// Mensagem que será transmitida
char codigo[] = "sos";

// Variáveis para calibração
int tempo_curto = 200;
int tempo_longo = 600;
int tempo_e_toques = 200;

int contador = 0;

void setup () {
    pinMode(LED, OUTPUT);
}

void curto () {
    digitalWrite(LED, HIGH);
    delay(tempo_t_curto);
    digitalWrite(LED, LOW);
    delay(tempo_e_toques);
}

void longo () {
    digitalWrite(LED, HIGH);
    delay(tempo_t_longo);
    digitalWrite(LED, LOW);
    delay(tempo_e_toques);
}

void loop () {
    if (codigo[contador] == 's') { //S
        curto(); curto(); curto();
        delay(200);
    }

    if (codigo[contador] == 'o') { //O
        longo(); longo(); longo();
        delay(200);
    }

    contador++;

    if (codigo[contador] == '\0') { //FIM
        contador = 0;
        delay(2000);
    }
}
