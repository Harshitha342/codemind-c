#include <stdio.h>

int getlargestdigit(int num) {
    int digit = 0;
    
    while (num != 0) {
        int n = num % 10;
        digit = (digit > n)? digit : n;
        num /= 10;
    }
    
    return digit;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int LargestDigit = getlargestdigit(num);
    printf("%d", LargestDigit);
    
}