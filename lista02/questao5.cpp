#include <stdio.h>

int main()
{
    float largura;
    float comprimento;
    
    printf("Digite a largura da sala em metros: ");
    scanf("%f", &largura);
    
    printf("Digite o comprimento da sala em metros: ");
    scanf("%f", &comprimento);
    
    printf("A sala possui area de %f m².", largura * comprimento);
    
    return 0;
}
