#include <stdio.h>
#include <cstdlib>
#include <iostream>

int main(){
    char continuar = 's';
    while (continuar == 's'){
        int numero = 1 + rand() % 1001;
        printf("Eu tenho um número entre 1 e 1000.\nVocê consegue adivinhar o meu número?\nDigite seu primeiro palpite.\n");
        int input = 0;
        while (true){
            std::cin >> input;
            if (input == numero){
                printf("Excelente! Você adivinhou o número! Você gostaria de jogar novamente?(s ou n)?\n");
                break;
            }
            else if (input < numero){
                printf("Muito baixo. Tente novamente.\n");
            }
            else{
                printf("Muito alto. Tente novamente.\n");
            }
        }
        std::cin >> continuar;

    }
}
