#include<stdio.h>
int main(){
    int num,first,last;
    int sum=0;
    scanf("%d",&num);
    last=num%10;
    while(num>=10){
        num=num/10;
    }
    first=num;
    sum=first+last;
    printf("%d",sum);
}