#include <stdio.h>

int main()
{
    float gasolina;
    float etanol;
    printf("Informe o valor da gasolina: R$");
    scanf("%f", &gasolina);
    printf("Informe o valor do etanol: R$");
    scanf("%f", &etanol);
    
    (etanol / gasolina < 0.7) ? printf("Abasteça com etanol.") : printf("Abasteça com gasolina.");
  
    return 0;
}
