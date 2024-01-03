#include <stdio.h>

  int main () {
      char str[1001]; 
      scanf("%[^
]", str);
      getchar();
      
      char El;
      scanf("%c", &El);
      
      int flag = 0;
      for (int i = 0; str[i] != NULL; i++) {
          if (str[i] == El) {
              printf("True
%d", i);
              flag = 1;
              break;
          }
      }
      if (flag == 0) {
          printf("False");
      }
  }