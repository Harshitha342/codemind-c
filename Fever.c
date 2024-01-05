#include <stdio.h>

  int main () {
      int Temp;
      scanf("%d", &Temp);
      
      const char *str = (Temp > 98) ? "YES" : "NO" ;
      
      printf("%s", str);
      
  }