#include <stdio.h>
#include <math.h>

int isprime (int n) {
    if (n < 2) {
        return 0;
    }
    
    if (n < 4) {
        return 1;
    }
    
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

 int main () {
     int num;
     scanf("%d", &num);
     
     int count = 0;
     for (int i = 1; i <= num; i++) {
         if (num % i == 0 && isprime(i) == 0) {
             count++;
         }
     }
     printf("%d", count);
 }