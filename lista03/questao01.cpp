#include <stdio.h>

int main()
{
    float quilometros;
    float litros;
    printf("Insira a quantidade de quilometros rodados: ");
    scanf("%f", &quilometros);
    printf("Insira a quantidade de litros de combustivel consumida: ");
    scanf("%f", &litros);
    printf("A media de consumo do carro foi de %.2f km/l.", quilometros / litros);
    return 0;
}
