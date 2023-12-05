#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a=1;
    for(int i=1 ; i<=num ; i++){
        a=i*a;
    }
    printf("%d",a);
}