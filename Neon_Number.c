#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int s = num*num;
    int last,sum=0;
    while(s){
        last = s%10;
        sum = sum+last;
        s=s/10;
    }
    if(sum == num){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}