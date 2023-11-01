#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    printf("%d",digits);
}