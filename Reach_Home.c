#include <stdio.h>

void Destiny (int ltr, int dist) {
    int canTravel = 5 * ltr;
    
    if (canTravel >= dist) {
        printf("YES
");
    } else {
        printf("NO
");
    }
    
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    Destiny(num1, num2);
    
}