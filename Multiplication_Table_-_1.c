#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for( int b = 1 ; b <= 12 ; b++){
        printf("%d x %d = %d
",a,b,b*a);
    }
}