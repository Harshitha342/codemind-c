#include <stdio.h>

void sum_of_N (int *n) {
    *n = (*n) * (*n + 1) / 2;
}

void print(int n) {
    printf("%d", n);
}

void read ()  {
    int n;
    scanf("%d", &n);
    sum_of_N(&n);
    print(n);
}
int main () {
    read();
}