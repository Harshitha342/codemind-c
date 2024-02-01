#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("%d", sum);
    
}