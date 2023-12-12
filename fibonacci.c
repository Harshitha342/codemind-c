#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a,b,c;
    a=0;
    b=1;
    c=0;
    for(int i = 1 ; i<=num ; i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}