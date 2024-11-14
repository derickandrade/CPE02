#include <iostream>

int main()
{
    float lado_a;
    float lado_b;
    float lado_c;

    std::cout << "Insira a medida do primeiro lado do triângulo: ";
    std::cin >> lado_a;

    std::cout << "Insira a medida do segundo lado do triângulo: ";
    std::cin >> lado_b;

    std::cout << "Insira a medida do último lado do triângulo: ";
    std::cin >> lado_c;

    if ((lado_a == lado_b) && (lado_a == lado_c)) {
        std::cout << "O triângulo informado é equilátero.";
    }
    else if ((lado_a != lado_b) && (lado_b != lado_c) && (lado_a != lado_c)) {
        std::cout << "O triângulo informado é escaleno.";
    }
    else {
        std::cout << "O triângulo informado é isósceles.";
    }
    return 0;
}   

