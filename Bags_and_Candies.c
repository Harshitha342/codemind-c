#include<stdio.h>
int main(){
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    if(n % (m*k) == 0){
        printf("%d",n/(m*k));
    }
    else{
        printf("%d",n/(m*k)+1);
    }
}