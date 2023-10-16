#include<stdio.h>
int main(){
    int a;
    float res;
    scanf("%d",&a);
    if(a<=199){
        res=a*1.20+100;
    }
    else if(a>=200 && a<400){
        res=a*1.50+100;
    }
    else if(a>=400 && a<600){
        res=a*1.80; 
        res+=res*0.15;
    }
    else if(a>=600){
        res=a*2.00; 
        res+=res*0.15;
    }
    printf("%.2f",res);
}