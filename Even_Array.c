#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int flag=1;
    for(int i= 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    if(arr[i]%2!=0){
        flag=0;
    }
    }
    if(flag){
        printf("True");
    }
    else{
        printf("False");
    }
    
}