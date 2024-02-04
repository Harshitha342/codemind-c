#include <stdio.h>
#include <math.h>

int sumofSquare(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += pow(i, 2);
    }
    return sum;
}

int SumofN(int num) {
    return num * (num + 1) / 2;
}

int difference(int sum, int sumofsquare) {
    return sum - sumofsquare;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int sumofsquare = sumofSquare(num);
    int sum = pow(SumofN(num), 2);
    int diff = difference(sum, sumofsquare);
    
    printf("%d
", diff);
    
}