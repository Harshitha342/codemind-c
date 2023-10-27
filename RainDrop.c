#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0 && a%7==0){
        printf("PlingPlangPlong");
    }
    else if(a%3==0 && a%5==0){
        printf("PlingPlang");
    }
    else if(a%3==0 && a%7==0){
        printf("PlingPlong");
    }
    else if(a%3==0){
        printf("Pling");
    }
    else if(a%5==0){
        printf("Plang");
    }
    else if(a%7==0){
        printf("Plong");
    }
    else{
        printf("%d",a);
    }
}