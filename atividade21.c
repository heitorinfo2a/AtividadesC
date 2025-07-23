#include <stdio.h>

int main() {
    int d, m, a;

    printf("\n\n");
    printf("Informe o dia do mes: ");
    scanf("%d", &d);

    printf("Informe o mes do ano: ");
    scanf("%d", &m);

    printf("Informe o ano: ");
    scanf("%d", &a);

    if(d > 31 || m > 12 || a < 1900){
        printf("Data inválida, insira novamente.\n");
        return 1;
    }

    printf("-------------------------\n");

    printf("A sua data formatada é: %02d/%02d/%04d\n\n", d, m, a);

    return 0;
}
