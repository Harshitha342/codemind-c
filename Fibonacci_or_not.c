#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;
    int sum=0;
    while(a<=n){
        if(a==n){
            sum=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(sum==1){
        printf("True");
    }
    else{
        printf("False");
    }
}