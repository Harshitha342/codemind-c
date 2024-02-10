#include <stdio.h>
#include <math.h>

int isprime(int num) {
    if(num <= 1) {
        return 0;
    } else if (num <= 3) {
        return 1;
    } else if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if(num % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main () {
    int num;
    scanf("%d", &num);
    
    if(isprime(num)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    
    return 0;
}