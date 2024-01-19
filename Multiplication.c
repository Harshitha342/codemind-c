#include <stdio.h>

void read();
void mul (int n);
void print(int n);

int main () {
    read();
}

void print (int n) {
    printf("%d", n);
}

void mul (int *a, int *b, int *c) {
    (*c) = (*a) * (*b);
}

void read () {
    int a, b;
    scanf("%d %d", &a, &b);
    int c;
    mul (&a, &b, &c);
    print(c);
}