#include <stdio.h>

  int main () {
      int x, y;
      scanf("%d %d", &x, &y);
      
      int required = (x > y) ? x - y : 0;
      
      printf("%d", required);
      
  }