#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int count = 0;
      for (int i = 1; i < n - 1; i++) {
          int l = arr[i - 1];
          int r = arr[i + 1];
          if ( (l % 2 == 0 && r % 2 != 0) || ( l % 2 != 0 && r % 2 == 0) ) {
              count++;
          }
      }
      printf("%d ", count);
  }