#include<stdio.h>
int main(){
    int a,n=0;
    scanf("%d",&a);
    int arr[100];
        for(int i = 0 ; i<a ; i++){
            scanf("%d",&arr[i]);
        }
        int b;
        scanf("%d",&b);
        for(int i = 0 ; i<a ; i++){
            if(arr[i]==b){
                n++;
            }
        }
        if(n>0){
            printf("True");
        }
        else{
            printf("False");
        }
}
