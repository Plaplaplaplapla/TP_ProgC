int main() {
    char str1[100] = "Hello"
    char str2[100] = " World!"
    char copie[100]
    char concat[200]
    int i
    int longueur1 = 0
    int longueur2 = 0

    i = 0
    while(str1[i] != '\0') {
        longueur1 = longueur1 + 1
        i = i + 1
    }

    i = 0
    while(str2[i] != '\0') {
        longueur2 = longueur2 + 1
        i = i + 1
    }

    i = 0
    while(str1[i] != '\0') {
        copie[i] = str1[i]
        i = i + 1
    }
    copie[i] = '\0'

    i = 0
    while(str1[i] != '\0') {
        concat[i] = str1[i]
        i = i + 1
    }

    int j = 0
    while(str2[j] != '\0') {
        concat[i] = str2[j]
        i = i + 1
        j = j + 1
    }
    concat[i] = '\0'

    printf("Longueur de str1 : %d\n", longueur1)
    printf("Longueur de str2 : %d\n", longueur2)
    printf("Copie de str1 : %s\n", copie)
    printf("Concaténation : %s\n", concat)

    return 0
}
