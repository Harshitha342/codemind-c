#include <stdio.h>

void printLargestDigit(int number) {
    int digit = 0;
    while(number != 0) {
        int num = number % 10;
        number /= 10;
        if (digit == 0 || digit < num) {
            digit = num;
        }
    } printf("%d", digit);
}

int main() {
    int Number;
    scanf("%d", &Number);
    printLargestDigit(Number);
}