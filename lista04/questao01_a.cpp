#include <iostream>
/*O maior número que o programa consegue calcular o fatorial sem overflow é 12, pois 13! é mais de 6 bilhões que excede o maior 
valor que um int consegue guardar (2^31 = 2.1 bilhões).

SOLUÇÃO USANDO WHILE */
int main()
{
    int numero = 0;

    std::cout << "Insira um inteiro positivo para calcular seu fatorial: ";
    std::cin >> numero;

    int b = numero - 1;

    if (numero == 0) {
        numero = 1;
    }

    else {
        while (b > 0) {
            numero = numero * b;
            b = b - 1;
        }
    }
    std::cout << numero;

    return 0;
}

/*
SOLUÇÃO USANDO FOR
#include <iostream>

int main()
{
    int numero = 0;
    int resultado = 1;

    std::cout << "Insira um inteiro positivo para calcular seu fatorial: ";
    std::cin >> numero;


    if (numero == 0) {
        numero = 1;
    }

    else {
        for (int i = 1; i <= numero; i++){
            resultado = resultado * i;
        }
    }
    std::cout << resultado;

    return 0;
}


*/
