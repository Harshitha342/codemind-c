#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int max = (a > b) ? a : b ;
    while(1){
        if(max % a == 0 && max % b == 0){
            printf("%d",max);
            break;
        }
        max++;
    }
    
}