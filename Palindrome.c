#include<stdio.h>
int main(){
    int num,temp;
    scanf("%d",&num);
    temp=num;
    int rev=0;
    while(num){
        rev=(rev*10)+num%10;
        num=num/10;
    }
    if(rev==temp){
        printf("True");
    }
    else{
        printf("False");
    }
}