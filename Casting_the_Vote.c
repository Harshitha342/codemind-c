#include <stdio.h>

  int main () {
      int Age;
      scanf("%d", &Age);
      
      const char *str = (Age >= 18) ? "YES" : "NO" ;
      
      printf("%s", str);
      
  }