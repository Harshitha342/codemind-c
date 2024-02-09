#include <stdio.h>
#include <math.h>

int isneon(int num) {
    int power = pow(num, 2);
    int pow_sum = 0;
    
    while(power != 0) {
        pow_sum += power % 10;
        power /= 10;
    }
    
    return (pow_sum == num);
}

int main() {
    int num;
    scanf("%d", &num);
    
    if(isneon(num)) {
        printf("Neon Number");
    } else {
        printf("Not Neon Number");
    }
    
}