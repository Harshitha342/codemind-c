#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=2*x ; i>0; i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}