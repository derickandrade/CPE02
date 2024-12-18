#include <stdio.h>
#include <cstdlib>
#include <iostream>

int pergunta(){
    int primeiro = rand() % 10;
    int segundo = rand() % 10;
    printf("Quanto é %d vezes %d?\n", primeiro, segundo);
    return primeiro * segundo;
}

int main(){
    while (true){
        int resposta = pergunta();
        int input = 0;
        while (true){
            std::cin >> input;
            if (input == resposta){
                printf("Muito bom!\n");
                break;
            }
            else{
                printf("Não. Por favor, tente novamente.\n");
            }
        }
    }
}
