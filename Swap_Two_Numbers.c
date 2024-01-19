#include <stdio.h>

void swap (int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void print (int a, int b) {
    printf("%d
%d", a, b);
}

void read () {
    int a, b;
    scanf("%d %d", &a, &b);
    swap (&a, &b);
    print(a, b);
}

int main (void) {
    read();
}