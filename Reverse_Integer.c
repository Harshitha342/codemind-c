#include<stdio.h>
int main(){
    int num,rev,res=0;
    scanf("%d",&num);
    while(num){
        rev=num%10;
        num=num/10;
        res=res*10+rev;
    }
    printf("%d",res);
}
