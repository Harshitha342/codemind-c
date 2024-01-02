#include <stdio.h>
#include <stdbool.h>

  int main () {
      int num;
      scanf("%d", &num);
      
      int reverse = 0;
      int temp = num;
      
      while(temp > 0) {
          reverse = reverse * 10 + (temp % 10);
          temp /= 10;
      }
      
      if(num == reverse) {
          printf("True");
      } else {
          printf("False");
      }
      
  }