#include <stdio.h>
#include <string.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      int Len = 0;
      for (int i = 0; str[i] != NULL; i++) {
          Len++;
      }
      printf("%d", Len);
  }