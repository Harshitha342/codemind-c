#include <stdio.h>

int maximumChocolates (int a, int b, int c) {
    return ((5 * a) + (10 * b)) / c;
}

void Display (int max) {
    printf("%d", max);
}

void read () {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    Display (maximumChocolates(x, y, z));
}

int main () {
    read();
}