#include <stdio.h>
#include <ctype.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      int Len = 0;
      for (int i = 0; str[i] != NULL; i++) {
          if (isupper(str[i])) {
              Len++;
          }
      }
      printf("%d", Len);
  }