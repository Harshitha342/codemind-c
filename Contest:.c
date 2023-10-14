#include<stdio.h>
int main(){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if (x<=(a+(b*2))){
        printf("Qualify");
    }
    else{
        printf("Not Qualify");
    }
}