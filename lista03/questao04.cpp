#include <iostream>

int main()
{
    int numero;
    int numero_original;
    int ultimo_digito;
    int multiplicador = 1;
    int resultado = 0;
    std::cout << "Insira um número binário: ";
    std::cin >> numero;
    numero_original = numero;
    while (numero != 0) {
        ultimo_digito = numero % 10;
        resultado += ultimo_digito * multiplicador;
        multiplicador *= 2;
        numero /= 10;
    }
    std::cout << "O número binário " << numero_original << " em decimal é " << resultado << std::endl;
}   

