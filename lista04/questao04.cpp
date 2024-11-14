#include <iostream>

int main() {
    
float produto1 = 2.98;
float produto2 = 4.5;
float produto3 = 9.98;
float produto4 = 4.49;
float produto5 = 6.87;

float total = 0;
int codigo = 0;
int quantidade = 0;

std::cout << "Insira o código do produto (A) e a quantidade vendida (B) (insira 0 no código para encerrar o programa)\n";

while (1) {
    std::cout << "A. ";
    std::cin >> codigo;

    if (codigo == 0) {
        break;
    }

    std::cout << "B. ";
    std::cin >> quantidade;


    switch (codigo) {
    case 1:
        total += produto1 * quantidade;
        break;
    
    case 2:
        total += produto2 * quantidade;
        break;

    case 3:
        total += produto3 * quantidade;
        break;

    case 4:
        total += produto4 * quantidade;
        break;

    case 5:
        total += produto5 * quantidade;
        break;
    }
    }
std::cout << "Total vendido: R$" << total << '\n';
    return 0;
}
