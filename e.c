#include <stdio.h>

int main()
{
    float f;
    
    printf("Digite a temperatura em Fahrenheit \n");
    scanf("%f",&f);
    
    float c = ((f-32)*5) /9;
    
    printf("A temperatura em Celsuis e: %.2f\n",c);
    
    
    
    
    return 0;
}
