#include <stdio.h>

  int main () {
      int Time;
      scanf("%d", &Time);
      
      const char *str = (Time > 40) ? "YES" : "NO" ;
      
      printf("%s", str);
      
  }