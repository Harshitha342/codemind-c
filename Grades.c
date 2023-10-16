#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float res;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    res=(a+b+c+d+e)*0.2;
    if(res>=90){
        printf("Grade A");
    }
    else if(res>=80){
        printf("Grade B");
    }
    else if(res>=70){
        printf("Grade C");
    }
    else if(res>=60){
        printf("Grade D");
    }
    else if(res>=40){
        printf("Grade E");
    }
    else if(res<40){
        printf("Grade F");
    }
}