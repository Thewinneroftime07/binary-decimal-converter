#include <stdio.h>
#include <math.h>

// Funksioni rekursiv per konvertimin nga dhjetor ne binar
void decimalNeBinar(int n) {
    if (n == 0) 
     return;
    decimalNeBinar(n / 2);
    printf("%d", n % 2);
}

// Funksioni rekursiv per konvertimin nga binar ne dhjetor
int binarNeDecimal(int binar, int fuqi) {
    if (binar == 0)
     return 0;
    return (binar % 10) * pow(2, fuqi) + binarNeDecimal(binar / 10, fuqi + 1);
}

// Funksioni rekursiv per te afishuar nje tabele ne rend te kundert
void printoNeKundert(int T[], int index) {
    if (index < 0) return;
    printf("%d ", T[index]);
    printoNeKundert(T, index - 1);
}

int main() {
    // Testim per konvertimin nga dhjetor ne binar
    int dhjetor;
    printf("Jep nje numer dhjetor: ");
    scanf("%d", &dhjetor);
    printf("Ne binar: ");
    if (dhjetor == 0)
        printf("0");
    else
        decimalNeBinar(dhjetor);
    printf("\n");

    // Testim per konvertimin nga binar ne dhjetor
    int binar;
    printf("Jep nje numer binar: ");
    scanf("%d", &binar);
    printf("Ne dhjetor: %d\n", binarNeDecimal(binar, 0));

    // Testim per afishimin ne rend te kundert
    int T[] = {1, 2, 3, 4, 5};
    int N = sizeof(T) / sizeof(T[0]);
    printf("Tabela ne rend te kundert: ");
    printoNeKundert(T, N - 1);
    printf("\n");

    return 0;
}
