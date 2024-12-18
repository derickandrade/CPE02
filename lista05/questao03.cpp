#include <stdio.h>

bool perfect(int numero){
    int acumulador = 1;
    int fator = 2;

    for (int i = 2; i <= numero / 2; i++){
        if (numero % i == 0){
            acumulador += i;
        }
    }

    if (acumulador == numero){
        return true;
    }
    return false;
}

void imprimeFatores(int numero){
    int acumulador = 1;
    int fator = 2;
    printf("1");
    for (int i = 2; i <= numero / 2; i++){
        if (numero % i == 0){
            acumulador += i;
            printf(" + %d", i);
        }
    }
    printf(" = %d\n", numero);
}

int main(){
    for (int i = 2; i < 33550337; i++){
        if (perfect(i)){
            imprimeFatores(i);
        }
    }
}
