#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    char op = '+';
    int resultat;

    switch(op) {
        case '+':
            resultat = num1 + num2;
            break;
        case '-':
            resultat = num1 - num2;
            break;
        case '*':
            resultat = num1 * num2;
            break;
        case '/':
            resultat = num1 / num2;
            break;
        case '%':
            resultat = num1 % num2;
            break;
        case '&':
            resultat = num1 & num2;
            break;
        case '|':
            resultat = num1 | num2;
            break;
        case '~':
            resultat = ~num1;
            break;
        default:
            printf("Opérateur inconnu\n");
            return 0;
    }

    printf("%d\n", resultat);

    return 0;
}

