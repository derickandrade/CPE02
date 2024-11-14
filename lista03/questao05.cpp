#include <iostream>
void printar(bool resultado, char caractere) {
    if (resultado) {
        std::cout << "O caractere " << caractere << " é uma vogal." << '\n';
    }
    else {
        std::cout << "O caractere " << caractere << " não é uma vogal." << '\n';

    }
    return;
}

int main()
{
    char caractere = ' ';
    bool resultado = true;
    std::cout << "Insira um caractere: ";
    std::cin >> caractere;

    switch (caractere) {
    case 'a':
        break;
    case 'e':
        break;
    case 'i':
        break;
    case 'o':
        break;
    case 'u':
        break;
    default:
        resultado = false;
        break;
    }
    printar(resultado, caractere);
    return 0;
}   

