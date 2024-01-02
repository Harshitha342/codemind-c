#include<stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i =0 ; i < a; i++){
        scanf("%d",&arr[i]);
        if(i%2!=0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    
}