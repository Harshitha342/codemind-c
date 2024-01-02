#include <stdio.h>

  int main () {
      int A,B;
      scanf("%d %d", &A, &B);
      
      int Time = (A * B) / (A + B);
      printf("%d", Time);
      
  }