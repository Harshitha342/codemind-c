#include <stdio.h>

void printFactors(int num);

int main() {
    int num;
    scanf("%d", &num);
    printFactors(num);
}

void printFactors(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}