#include <stdio.h>
#include <math.h>

int getLast (int num) {
    return num % 10;
}

int getFirst (int num) {
    int power = (int) log10 (num);
    return num / pow(10, power);
}

int main() {
    int num;
    scanf("%d", &num);
    
    int First = getFirst(num);
    int Last = getLast(num);
    
    printf("%d", First + Last);
    
}