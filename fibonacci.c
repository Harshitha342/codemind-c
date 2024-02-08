#include <stdio.h>

void printFibonacii(int range);

int main() {
    int range;
    scanf("%d", &range);
    printFibonacii(range);
}

void printFibonacii(int range) {
    int a = 0, b = 1, c = 0;
    for(int i = 0; i < range; i++) {
        printf("%d ", c);
        a = b;
        b = c;
        c = c + a;
    }
}