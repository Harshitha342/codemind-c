#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double A[100];
    for(int i = 0 ; i < n ; i++){
        scanf("%lf",&A[i]);
        if(A[0]<A[i]){
            A[0]=A[i];
        }
    }
    printf("%.lf",A[0]);
}