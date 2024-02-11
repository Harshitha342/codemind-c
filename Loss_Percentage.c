#include <stdio.h>

int main() {
    int costPrice, sellinPrice;
    scanf("%d %d", &costPrice, &sellinPrice);
    
    float Loss = (float) (costPrice - sellinPrice) / costPrice * 100;
    
    printf("%.2f", Loss);
    return 0;
}