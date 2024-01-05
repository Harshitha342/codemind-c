#include <stdio.h>

  int main () {
      int interest, inflation;
      scanf("%d %d", &interest, &inflation);
      
      int investment = (interest >= 2 * inflation) ? 1 : 0;
      
      if (investment) {
          printf("YES");
      } else {
          printf("NO");
      }
      
  }