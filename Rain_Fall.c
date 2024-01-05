#include <stdio.h>

  int main () {
      int Rain;
      scanf("%d", &Rain);
      
      if (Rain < 3) {
          printf("LIGHT");
      } else if (Rain >= 3 && Rain < 7) {
          printf("MODERATE");
      } else {
          printf("HEAVY");
      }
      
  }