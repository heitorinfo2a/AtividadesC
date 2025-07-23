#include <stdio.h>

int main()
{
    float raio;
    float altura;
   
    
    printf("Qual a altura da embalagem: \n");
    scanf("%f", &altura);
    
    printf("Qual o raio da embalagem: \n");
    scanf("%f", &raio);
    
    float volume = 3.14159 * raio * altura;
    
    printf("O volume da embalagem e (em litros): %.2f\n", volume);
    
    float ml = volume*1000;
    
    
    printf("O volume em mililitros e: %.2f\n", ml);
    
    return 0;
}
