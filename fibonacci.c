#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n, i;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
