#include <stdio.h>
#include <math.h>

int reverse(int num) {
    int rev = 0;
    while(num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int sq_num = pow(num, 2);
    int rev_num = reverse(num);
    int sq_rev = reverse(pow(rev_num, 2));
    
    if(sq_num == sq_rev) {
        printf("True
");
    } else {
        printf("False
");
    }
    
}