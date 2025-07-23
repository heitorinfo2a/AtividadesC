
retu#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, m, d;

    printf("Informe o ano: ");
    scanf("%d", &a);

    printf("Informe o mes: ");
    scanf("%d", &m);

    printf("Informe o dia: ");
    scanf("%d", &d);

    if(d > 31 || m > 12 || a < 1900){
        printf("Data inválida, insira novamente.\n");
        return 1;
    }

    printf("-------------------------------\n");

    printf("Data antes da conversão: %04d/%02d/%02d\n", a, m, d);
    printf("Data depois da conversão: %02d/%02d/%04d\n", d, m, a);

    return 0;
}
