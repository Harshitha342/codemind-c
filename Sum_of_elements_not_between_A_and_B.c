#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int el1, el2;
      scanf("%d %d", &el1, &el2);
      
      int sum = 0;
      for (int i = 0; i < n; i++) {
          if (arr[i] < el1 || arr[i] > el2) {
              sum += arr[i];
          }
      }
      printf("%d ", sum);
  }