int main() {
    int d = 1048577; // Valeur de départ 
    int bit4;
    int bit20;
    int resultat;

    // On récupère le 4ème bit de gauche 
    bit4 = (d >> 28) & 1;   // Décalage de 28 car 32 - 4 = 28

    // On récupère le 20ème bit de gauche
    bit20 = (d >> 12) & 1;  // Décalage de 12 car 32 - 20 = 12

    // Vérification si les deux bits sont 1
    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }

 
    printf("%d\n", resultat);

    return 0;
}
