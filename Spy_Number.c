#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rev,res=0,pro=1;
    while(num){
        rev=num%10;
        res+=rev;
        pro*=rev;
        num=num/10;
    }
    if(res == pro){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}