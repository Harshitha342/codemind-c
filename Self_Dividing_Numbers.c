#include <stdio.h>

int isSelfDiv (int num) {
    int temp = num;
    while(temp > 0) {
        
        int digit = temp % 10;
        if(digit == 0) {
            return 0;
        } else if(num % digit != 0) {
            return 0;
        }
        
        temp /= 10;
    }
    return 1;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    for(int i = num1; i <= num2; i++) {
        if(isSelfDiv(i)) {
            printf("%d ", i);
        }
    }
    
}