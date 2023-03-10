#include <stdio.h>
#include <unistd.h>

void gd_putchar(char c) {
    write(1, &c, 1);
}

int gd_putstr(char *str) {
    int len = 0;
    while (*str != '\0') {
        gd_putchar(*str);
        len++;
        str++;
    }
    return len;
}

int gd_strlen(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main(void) {
    char *str = "Coucou";
    int len = gd_strlen(str);
    printf("La longueur de la chaine '%s' est : %d\n", str, len);
    return 0;
}
