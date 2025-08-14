#include <stdio.h>

int main() {
    int x;
    printf("Numero\tQuadrado\tCubo\n");
    for(x = 0; x <= 10; x++) {
        printf("%d\t%d\t\t%d\n", x, x*x, x*x*x);
    }
    return 0;
}