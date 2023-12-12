#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int cnt=0;
    for(int i=a ; i<=b ; i++){
        if(i%2 == 0 && i%3 == 0){
            cnt++;
        }
    }
    printf("%d",cnt);
}