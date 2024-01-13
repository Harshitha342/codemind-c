#include <stdio.h>
#include <string.h>

int main () {
    int Tcases;
    scanf("%d", &Tcases);
    
    int x = 0;
    while(Tcases > 0) {
        char str[4];
        scanf("%s", str);
        
        if (strcmp(str, "++X") == 0 || strcmp(str, "X++") == 0) {
            x++;
        } else {
            x--;
        }
        Tcases--;
    }
    printf("%d", x);
}