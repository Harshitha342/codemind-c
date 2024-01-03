#include <stdio.h>

int isperfect(int n) {
    for (int i = 0; i <= n; i++) {
        if ( i * i == n ) {
            return 1;
        }
    }
    return 0;
}

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n], sum = 0;
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
          if (isperfect(arr[i])) {
              sum += arr[i];
          }
      }
      printf("%d", sum);
  }