#include <stdio.h>


int main()
{
    char numero[5];
    printf("Informe um número de 5 dígitos: ");
    scanf("%5s", numero);
    if ((numero[0] == numero[4]) && (numero[1] == numero[3])){
        printf("O número %5s é palíndrome.", numero);
    }
    else{
        printf("O número %5s não é palíndrome.", numero);
    }
    
    return 0;
}
