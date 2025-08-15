#include <stdio.h>

int main() {
    int x;
    printf("Numero\tQuadrado\tCubo\n");
    for(x = 0; x <= 10; x++) {
        printf("%-7d%-12d%-7d\n", x, x*x, x*x*x);  // Ajustando o espaço
    }
    return 0;
}
