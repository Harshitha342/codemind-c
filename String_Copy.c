#include <stdio.h>
#include <string.h>

int main () {
    char str[1001];
    scanf("%[^
]", str);
    
    char Copy[strlen(str)];
    strcpy(Copy, str);
    
    printf("%s", Copy);
}