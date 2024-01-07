#include<stdio.h> 
#define pi 3.14

   int main ()  {
       float r;
       scanf("%f", &r);
       
       printf("%.2f
%.2f", pi * r * r , 2 * pi * r);
       return 0;
   }