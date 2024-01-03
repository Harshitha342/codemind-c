#include <stdio.h>
#include <stdlib.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int even_sum = 0, odd_sum = 0;
      for (int i = 0; i < n; i++) {
          if (arr[i] % 2 == 0) {
              even_sum += arr[i];
          } else {
              odd_sum += arr[i];
          }
      }
      printf("%d", abs(odd_sum - even_sum));
  } 
