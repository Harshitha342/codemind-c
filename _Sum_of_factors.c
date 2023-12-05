#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int fac=0;
    for(int i=1; i<num ; i++){
        if(num%i==0){
           fac=fac+i;
        }
    }
    printf("%d",fac);
}