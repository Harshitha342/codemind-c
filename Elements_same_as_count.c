#include <stdio.h>
#include <string.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int flag = 1;
      for (int i = 0; i < n/2; i++) {
          int count = 0;
          for (int j = 0; j < n; j++) {
              if (arr[i] == arr[j]) {
                  count++;
              }
          }
          if (count == arr[i]) {
              printf("%d ", arr[i]);
              flag = 0;
              arr[i] = 0;
          }
      }
      if (flag) {
          printf("-1");
      } 
  }