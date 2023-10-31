#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int fac_cnt=0;
    for(int i = 1 ; i <= num ; i++){
        if(num % i == 0){
            fac_cnt++;
        }
       }
       if(fac_cnt == 2){
        printf("Prime");
       }
       else{
        printf("Not Prime");
       }
}