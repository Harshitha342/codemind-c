#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last=0,b=0;
    while(num){
        last = num%10;
        if(last > b){
           b =last;
        }
        num = num/10;
    }
    printf("%d",b);
}