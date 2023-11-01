#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rev=0;
    while(a){
        rev=(rev*10)+a%10;
        a=a/10;
    }
    printf("%d",rev);
}