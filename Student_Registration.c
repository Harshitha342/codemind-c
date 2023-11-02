#include<stdio.h>
int main(){
    int t,n,m,k;
    int a,b,c;
    scanf("%d %d %d %d %d %d %d",&t,&n,&m,&k,&a,&b,&c);
    if(n<(m-k) && a<(b-c)){
        printf("YES
YES");
    }
    else if(n<(m-k) && a>(b-c)){
        printf("YES
NO");
    }
    else if(n>(m-k) && a<(b-c)){
        printf("NO
YES");
    }
    else{
        printf("NO
NO");
    }
}