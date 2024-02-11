#include <stdio.h>

int main() {
    int strt, end;
    scanf("%d %d", &strt, &end);
    
    int count = (strt % 3 == 0)? 1 : 0;
    count += (end / 3) - ((strt - 1) / 3);
    
    printf("%d", count);
    return 0;
}