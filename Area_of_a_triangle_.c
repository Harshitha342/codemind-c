#include <stdio.h>

void Display(int area);

int AreaofTriangle (int b, int h) {
    return (b * h) / 2;
}

int main(void) {
    int b, h;
    scanf("%d %d", &b, &h);
    Display(AreaofTriangle(b, h));
}

void Display(int area) {
    printf("%d", area);
}