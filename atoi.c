#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gd_putnbr(int nb) {
    if (nb < 0) {
        gd_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        gd_putnbr(nb / 10);
    }
    gd_putchar(nb % 10 + '0');
}

void gd_putchar(char c) {
    write(1, &c, 1);
}

int gd_atoi(char *str) {
    int sign = 1;
    int result = 0;

    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
        }
        str++;
    }

    return sign * result;
}

int main(void) {
    int nb = gd_atoi("-5000");
    gd_putnbr(nb);
    gd_putchar('\n');

    return 0;
}