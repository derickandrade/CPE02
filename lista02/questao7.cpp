#include <stdio.h>

int main()
{
    int numero;
    int acumulador{2};
    int flag{0};
    
    printf("Insira um numero inteiro positivo para verificar se ele e primo: ");
    scanf("%d", &numero);
    
    while (acumulador <= numero){
        
        if (numero % acumulador == 0){
            flag ++;
        }
        
        if (flag >= 2){
            break;
        }
        
        acumulador ++;
    }
    
    if (numero == 1 or flag >= 2){
        printf("Nao e primo");
    }
    
    
    else{
        printf("Eh primo");
    }
    
    return 0;
}
