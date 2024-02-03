#include <stdio.h>
#include <math.h>


float SphereVolume (int r) {
    float vol = 3.14 * (4.0 / 3) * r * r * r;
    return vol;
}

int main() {
    int radius;
    scanf("%d", &radius);
    printf("%.2f", SphereVolume(radius));
}