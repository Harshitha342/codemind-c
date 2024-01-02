#include<stdio.h>
int main(){
    int a,cnt=0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a; i++){
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i = 0 ; i<a; i++){
        if(arr[i]==b){
            cnt++;
        }
    }
    printf("%d",cnt);
    
}