#include <stdio.h>

void Display (int c) {
    printf("%d", c);
}

int add(int a, int b) {
    return a + b; 
}

void Read() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = add(a, b);
    Display(c);
}

int main () {
    Read();
}