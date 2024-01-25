#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);
    char str[5];
    strcpy(str, (num % 9)? "False" : "True");
    printf("%s", str);
}