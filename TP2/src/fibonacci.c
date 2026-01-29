int main() {
    int n = 7
    int i
    int a = 0
    int b = 1
    int c

    for(i = 0; i < n; i = i + 1) {
        if(i == 0) {
            printf("%d", a)
        } else if(i == 1) {
            printf(", %d", b)
        } else {
            c = a + b
            printf(", %d", c)
            a = b
            b = c
        }
    }
    printf("\n")
    return 0
}
