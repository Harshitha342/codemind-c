#include<stdio.h>
int main(){
    int a,res=0;
    scanf("%d",&a);
    int B[100];
    for(int i = 0 ; i < a ; i++){
        scanf("%d",&B[i]);
        res=res+B[i];
    }
    printf("%d",res);
}