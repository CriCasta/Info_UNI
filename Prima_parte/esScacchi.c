#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Funzione per controllare se le coordinate sono valide
int coordinate_valide(int x, int y) {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

// Funzione per controllare se la Regina può mangiare il Re
int regina_puo_mangiare(int re_x, int re_y, int regina_x, int regina_y, char *direzione, int *distanza) {
    if (regina_x == re_x) {
        *distanza = abs(regina_y - re_y);
        if (regina_y > re_y) {
            sprintf(direzione, "sud");
        } else {
            sprintf(direzione, "nord");
        }
        return 1;
    }
    if (regina_y == re_y) {
        *distanza = abs(regina_x - re_x);
        if (regina_x > re_x) {
            sprintf(direzione, "ovest");
        } else {
            sprintf(direzione, "est");
        }
        return 1;
    }
    if (abs(regina_x - re_x) == abs(regina_y - re_y)) {
        *distanza = abs(regina_x - re_x);
        if (regina_x > re_x && regina_y > re_y) {
            sprintf(direzione, "sud-ovest");
        } else if (regina_x > re_x && regina_y < re_y) {
            sprintf(direzione, "nord-ovest");
        } else if (regina_x < re_x && regina_y > re_y) {
            sprintf(direzione, "sud-est");
        } else {
            sprintf(direzione, "nord-est");
        }
        return 1;
    }
    return 0;
}

int main() {
    int re_x, re_y, regina_x, regina_y;
    char direzione[20];
    int distanza;

    // Input delle posizioni del Re e della Regina
    printf("Inserisci la posizione del Re (x y): ");
    scanf("%d %d", &re_x, &re_y);
    printf("Inserisci la posizione della Regina (x y): ");
    scanf("%d %d", &regina_x, &regina_y);

    // Controllo che le coordinate siano valide
    if (!coordinate_valide(re_x, re_y) || !coordinate_valide(regina_x, regina_y)) {
        printf("Errore: Le coordinate devono essere tra 1 e 8.\n");
        return 1;
    }

    // Controllo che il Re e la Regina non siano nella stessa posizione
    if (re_x == regina_x && re_y == regina_y) {
        printf("Errore: Il Re e la Regina non possono occupare la stessa posizione.\n");
        return 1;
    }

    // Controllo se la Regina può mangiare il Re
    if (regina_puo_mangiare(re_x, re_y, regina_x, regina_y, direzione, &distanza)) {
        printf("La Regina può mangiare il Re in direzione %s per %d posizioni.\n", direzione, distanza);
    } else {
        printf("La Regina non può mangiare il Re.\n");
    }

    return 0;
}
