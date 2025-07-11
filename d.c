#include <stdio.h>

int main()
{
    float c;
    
    printf("Digite a temperatura em celsius: \n");
    scanf("%f",&c);
    
    float f = (9*c + 160)/5;
    
    printf("A temperatura em Fahrenheit e: %.2f\n",f);
    
    
    
    
    return 0;
}
