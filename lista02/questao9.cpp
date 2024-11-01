#include <stdio.h>
#include <cmath>

int main()
{
    int quilometragem;
    float total{0};
    
    printf("Insira a quilometragem rodada: ");
    scanf("%d", &quilometragem);
    
    if (quilometragem <= 50){
      
        total = quilometragem * 1.75;
    }
    
    else if (quilometragem > 50 && quilometragem <= 150){
      
        total = 87.5 + ((quilometragem - 50) * 1.65);
    }
    
    else {
      
        total = 252.5 + ((quilometragem - 150) * 1.5);
    }
    
    
    printf("O custo total do aluguel do carro foi de R$%.2f com custo medio por km de R$%.2f.", total, (total / quilometragem));
    
    return 0;
}
