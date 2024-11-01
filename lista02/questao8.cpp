#include <stdio.h>
#include <cmath>

int main()
{
    int cateto1;
    int cateto2;
    
    printf("Insira o valor do primeiro cateto em cm: ");
    scanf("%d", &cateto1);
    
    printf("Insira o valor do segundo cateto em cm: ");
    scanf("%d", &cateto2);
    
    
    printf("A hipotenusa tem %f cm.", sqrt((cateto1*cateto2) + (cateto2 * cateto2)));
    
    return 0;
}
