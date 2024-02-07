#include <stdio.h>

int SumofDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int ProductofDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int sum = SumofDigits(num);
    int product = ProductofDigits(num);
    
    if (sum == product) {
        printf("Spy Number
");
    } else {
        printf("Not Spy Number
");
    }
    
}