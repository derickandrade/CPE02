#include <stdio.h>

int main()
{
    int primeiro;
    int segundo;
    
    printf("Insira o primeiro numero: ");
    scanf("%d", &primeiro);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &segundo);
    
    if (primeiro % segundo != 0){
        printf("%d nao e multiplo de %d", primeiro, segundo);
    }
    
    else{
        printf("%d e multiplo de %d", primeiro, segundo);
    }
    
    return 0;
}
