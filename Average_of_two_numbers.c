#include <stdio.h>

float findAvgof(int a, int b) {
    return (float)(a + b) / 2;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    float avg = findAvgof(a, b);
    printf("Average of %d and %d is: %.2f", a, b, avg);
}