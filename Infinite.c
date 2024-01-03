#include <stdio.h>

  int main () {
      int num;
      scanf("%d", &num);
      
      while (num != -1) {
          printf("%d
", num * num);
          scanf("%d", &num);
      }
      
  }