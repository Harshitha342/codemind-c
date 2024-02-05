#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *) malloc (sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    float AverageOfSuper = 0;
    float ElementCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == arr[i]) {
            AverageOfSuper += arr[i];
            ElementCount++;
            arr[i] = 0;
        }
    }
    
    if (ElementCount != 0) {
        printf("%.2f", AverageOfSuper / ElementCount);
    } else {
        printf("-1");
    }
    
    free(arr);
    return 0;
}