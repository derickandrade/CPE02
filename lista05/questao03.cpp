#include <stdio.h>
#include <cmath>
bool primo_ateRaiz(int numero) { //verifico até a raiz, aqui dá pra ver, por exemplo que se o número for 9, a metade estaria entre 4 e 5, mas a raiz que é 3, já é um múltiplo
    int raiz = sqrt(numero);
    int flag = 0;
    for (int i = 2; i <= raiz; i++){
       if ((numero % i) == 0){
           flag++;
       }
    }
    if (flag < 1){
        return true;
    }
    return false;
}

void perfect(int numero){
    int acumulador = 1;
    int fator = 2;
    int original = numero;
    do{
        while(!(primo_ateRaiz(fator))){
            fator++;
        }
        if ((numero % fator) == 0){
            acumulador += fator;
            printf("fator: %d acum: %d\n", fator, acumulador);
            numero /= fator;
            
        }
    }
    while(numero != 1);
    if (acumulador == original){
        printf("%d\nfator: %d acumulador: %d", original, fator, acumulador);
    }
    printf("%d\nfator: %d acumulador: %d", original, fator, acumulador);
}

int main(){
    perfect(6);
}
