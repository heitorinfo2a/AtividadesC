#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int valor, resto;

int main()
{
    printf("Informe/Digite um número: ");
    scanf("%d", &valor);
    
    resto = valor % 2;

    if (resto == 0) {
        printf("Este número é PAR.\n");
    } else {
        printf("Este número é ÍMPAR.\n");
    }

    return 0;
}
