#include <stdio.h>
#include <cmath>

void primos(int numero){ //verifico os divisores até o número - 1
    int flag = 0;
    for (int i = 2; i < numero; i++){
        if ((numero % i) == 0){
            flag++;
        }
    }
    if (flag == 0){
        printf("%d ", numero);
    }
}

void primos_Npor2(int numero){ //verifico até a metade do número, se ele tiver um múltiplo antes da metade e/ou uma metade, então não imprime
    int flag = 0;
    for (int i = 2; i <= (numero / 2); i++){
        if (numero % i == 0){
             flag++;
        }
    }
    if (flag < 1){
        printf("%d ", numero);
    }
}

void primos_ateRaiz(int numero) { //verifico até a raiz, aqui dá pra ver, por exemplo que se o número for 9, a metade estaria entre 4 e 5, mas a raiz que é 3, já é um múltiplo
    int raiz = sqrt(numero);
    int flag = 0;
    for (int i = 2; i <= raiz; i++){
       if ((numero % i) == 0){
           flag++;
       }
    }
    if (flag < 1){
        printf("%d\n", numero);
    }
}

int main(){
    for (int k = 2; k < 1000; k++){
        primos(k);
        primos_Npor2(k);
        primos_ateRaiz(k);
        }   
}
