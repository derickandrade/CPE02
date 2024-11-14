#include <stdio.h>
#include <iostream>

int main()
{
    float a;
    float b;
    char operador;
    float resultado;

    std::cout << "Insira o primeiro número: ";
    std::cin >> a;

    std::cout << "Insira o segundo número: ";
    std::cin >> b;

    std::cout << "Informe a operação desejada (+, -, *, /): ";
    std::cin >> operador;

    switch (operador) {
    case '+':
        printf("Resultado: %.2f %c %.2f = %.2f", a, operador, b, a + b);
        break;

    case '-':
        printf("Resultado: %.2f %c %.2f = %.2f", a, operador, b, a - b);
        break;

    case '*':
        printf("Resultado: %.2f %c %.2f = %.2f", a, operador, b, a * b);
        break;

    case '/':
        printf("Resultado: %.2f %c %.2f = %.2f", a, operador, b, a / b);
        break;

    default:
        printf("Insira um operador válido.");
        break;
    }

    return 0;
}

