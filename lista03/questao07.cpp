#include <iostream>

int main()
{
    int senha;

    std::cout << "Insira a senha\n";
    std::cin >> senha;

    if (senha == 1234) {
        std::cout << "ACESSO PERMITIDO";
    }
    else {
        std::cout << "ACESSO NEGADO";
    }
    return 0;
}

