#include <stdio.h>

//Function with no return type that prints addition of two numbers
void add(int a, int b) {
    int c = a + b;
    printf("%d", c);
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    add(a, b);
}