#include<stdio.h>
int main(){
    int n,sum=0,a=0;
    double avg;
    scanf("%d",&n);
    int arr[100];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    avg = sum/(n);
    for(int i = 0 ; i<n ; i++){
         if(avg == arr[i]){
             a++;
    }
    }
    if(a>0){
        printf("True");
    }
    else{
        printf("False");
    }
    
}
  