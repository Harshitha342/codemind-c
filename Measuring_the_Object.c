#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b || a==c|| a==d){
        printf("YES");
    }
    else if(a==b+c+d ||a==b+c || a==b+d || a==c+d){
        printf("YES");
    }
    else {
        printf("NO");
    }
}