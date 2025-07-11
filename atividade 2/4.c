#include <stdio.h>

int main(){

    float m1,m2,m3,media;

    printf( "informe a gasta gasolina do 1° mês: ");
    scanf("%f", &m1);

    printf( "informe a gasta gasolina do 1° mês: ");
    scanf("%f", &m2);

    printf( "informe a gasta gasolina do 1° mês: ");
    scanf("%f", &m3);
  
    media = (m1+m2+m3)/3;

    printf("a média é %.1f", media);

    return 0;
}
    
