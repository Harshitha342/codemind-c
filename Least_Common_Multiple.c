#include <stdio.h>

int findlcm (int a, int b) {
    
    int max = a;
    
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        } else {
            max++;
        }
    }
    
}
  int main () {
      int a,b;
      scanf("%d %d", &a, &b);
      
      printf("%d", findlcm(a,b));
      
  }