#include <stdio.h>
#include <stdlib.h>

int main(){
    double l, km, consumo;
    
    printf("Informe os litros consumidos: ");
    scanf("%lf", &l);
    printf("Informe a distância percorrida em KM: ");
    scanf("%lf", &km);
    
    consumo = km / l;

    printf("---------------------------\n");
    printf("A taxa de Km/L neste caso é: %lf\n\n", consumo);

    return 0;
}
