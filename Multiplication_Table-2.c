#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i=0;
    while(i<b){
        i++;
        printf("%d x %d = %d
",a,i,i*a);
    }
}