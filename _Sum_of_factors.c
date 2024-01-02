#include <stdio.h>

  int main () {
      int num;
      scanf("%d", &num);
      
      int sum = 0;
      for (int i = 1; i <= num/2; i++) { // excluding the number itself.
          if (num % i == 0) {
              sum += i;
          }
      }
      printf("%d", sum);
  }