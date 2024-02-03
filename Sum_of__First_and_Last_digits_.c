#include <stdio.h>

int getLast (int num) {
    return num % 10;
}

int getFirst (int num) {
    while (num > 10) {
        num /= 10;
    }
    return num;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int First = getFirst(num);
    int Last = getLast(num);
    
    printf("%d", First + Last);
    
}