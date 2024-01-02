#include<stdio.h>
int main(){
    int a,b,num=0;
    scanf("%d %d",&a,&b);
    for(int i=1 ; i<=a ; i++){
        if(a%i==0 && b%i==0){
             num = i;
        }
    }
    printf("%d",num);
}