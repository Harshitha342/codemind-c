#include <stdio.h>

int LastTwoDigits(int year) {
    return year % 100;
}

void Display(int result) {
    printf("%02d", result);
}

void Read () {
    int n;
    scanf("%d", &n);
    Display(LastTwoDigits(n));
}

int main () {
    Read();
}