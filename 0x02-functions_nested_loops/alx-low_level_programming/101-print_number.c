#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Returns: 0
 */

void _putchar(char i) {
    putchar(i);
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int vid = 1;
    int temp = n;

    while (temp > 9) {
        vid *= 10;
        temp /= 10;
    }

    while (vid > 0) {
        int digit = n / divisor;
        _putchar(digit + '0');
        n %= vid;
        vid /= 10;
    }
}

int main() {
    int num = 12345;
    print_number(num);

    return 0;
}

