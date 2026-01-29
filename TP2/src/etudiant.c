int main() {
    char noms[5][50] = {"Dupont", "Martin", "Lemoine", "Bernard", "Petit"}
    char prenoms[5][50] = {"Alice", "Bob", "Claire", "David", "Eva"}
    char adresses[5][100] = {"1 rue A", "2 rue B", "3 rue C", "4 rue D", "5 rue E"}
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0}
    float notes_sys[5] = {13.0, 11.5, 17.0, 15.0, 14.5}
    int i

    i = 0
    while(i < 5) {
        printf("Étudiant %d : %s %s\n", i+1, prenoms[i], noms[i])
        printf("Adresse : %s\n", adresses[i])
        printf("Note Programmation C : %.2f\n", notes_prog[i])
        printf("Note Système d'exploitation : %.2f\n", notes_sys[i])
        printf("\n")
        i = i + 1
    }

    return 0
}
