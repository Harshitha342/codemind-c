#include <stdio.h> 

  int main () {
      int x, y;
      scanf("%d %d", &x, &y);
      
      
      int Max_height = (x > y) ? x : y;
      
      printf("%d", Max_height);
      
  }