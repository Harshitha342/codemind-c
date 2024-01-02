#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a ; i<=b; i++){
        int dig=0,cnt=0;
        int temp=i;
        while(temp>0){
        int rev = temp % 10;
        temp/=10;
        dig++;
        if(rev == 0){
            break;
        }
        else if(i % rev==0){
            cnt++;
        }
        }
        if(cnt == dig){
        printf("%d ",i);
    }
    }
}