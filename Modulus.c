#include <stdio.h>

void mod (int a, int b) {
    printf("%d", a % b);
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    mod(a, b);
}