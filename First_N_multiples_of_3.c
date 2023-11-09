#include<stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
        if(3*i<=3*x){
            printf("%d ",3*i);
        }
    }
}