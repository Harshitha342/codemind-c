#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last_digit=0;
    while(num){
        int i=num % 10;
        num=num/10;
        last_digit=last_digit+i;
    }
    printf("%d",last_digit);
}