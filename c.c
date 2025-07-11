#include <stdio.h>

int main()
{
     int n1;
     int n2;
     
     printf("Digite o primeiro numero: ");
     scanf("%d", &n1);
     
     printf("Digite o segundo numero: ");
     scanf("%d", &n2);
     
     
     int soma = n1 + n2;
     int subtracacao = n1 - n2;
     float divisao = n1/n2;
     float resto = n1 % n2;
     int multiplicacao = n1* n2;
     
     
     printf("A soma entre esses numeros e: %d\n", soma);
     printf("A subtracacao entre esses numeros e: %d\n", subtracacao);
     printf("A divisao entre esses numeros e: %.2f\n", divisao);
     printf("A resto entre esses numeros e: %.2f\n", resto);
     printf("A multiplicacao entre esses numeros e: %d\n", multiplicacao);
     
     return 0;
}


