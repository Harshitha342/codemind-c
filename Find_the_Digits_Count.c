#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int count = 0;
    while (num > 0){
        count++;
        num /= 10;
    }
    printf("%d", count);
}