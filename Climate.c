#include <stdio.h>

void DisplayTemp(int temp) {
    if(temp > 20) {
        printf("HOT");
    } else {
        printf("COLD");
    }
}

int main() {
    int temp;
    scanf("%d", &temp);
    DisplayTemp(temp);
}