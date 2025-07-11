#include <stdio.h>

int main() {

    float n1,n2,n3,n4,media;

    printf( "informe a 1° nota: ");
    scanf("%f" , &n1);

    printf( "informe a 2° nota: ");
    scanf("%f" , &n2);

    printf( "informe a 3° nota: ");
    scanf("%f" , &n3);

    printf( "informe a 4° nota: ");
    scanf("%f" , &n4);   

    media = (n1+n2+n3+n4)/4;

    printf("a média é: %.1f", media);
    
    return 0;
}
    
