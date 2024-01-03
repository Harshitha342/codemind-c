#include<stdio.h>

int main() {
    int n;
    scanf("%i", &n);
    
    int arr[n];
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
        if( i % 2 == 0 && arr[i] % 2 != 0)
        {
            flag = 0;
        }
    }
    
    if(flag)  {
        printf("True");
    } else {
        printf("False");
    }
}