#include<stdio.h>
int main(){
    int n,sum=0;
    double avg;
    scanf("%d",&n);
    int arr[100];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("%.2lf",sum/(n*(1.0)));
}