#include <stdio.h>

int iseven(int num) {
    return !(num % 2);
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (iseven(num)) {
        printf("Even");
    } else {
        printf("Odd");
    }
    
}