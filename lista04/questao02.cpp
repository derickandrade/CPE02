#include <iostream>

int main() {
    //Padrão A
    std::cout << "(A)\n";
    for (int i = 1; i <= 10; i++) { //i determina a quantidade de *
        for (int j = 1; j <= i; j++) { //j imprime o tanto que i tá mandando
            std::cout << "* ";
        }
        std::cout << '\n';
    }
    std::cout << "(B)\n";

    //Padrão B
    for (int i = 10; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }
    //Padrão C
    std::cout << "(C)\n";
    for (int i = 0; i <= 10; i++) { //i determina a quantidade
        for (int j = 1; j <= i; j++) { //j imprime o tanto que i tá mandando
            std::cout << "  ";
        }
        for (int k = 1; k <= 10 - i; k++) {
            std::cout << " *";
        }
        std::cout << '\n';
    }
    //Padrão D
    std::cout << "(D)\n";
    for (int i = 9; i >= 0; i--) {
        
        for (int j = 1; j <= i; j++) {
            std::cout << "  ";
        }
        for (int k = 1; k <= 10 - i; k++) {
            std::cout << " *";
        }
        std::cout << '\n';
    }
    //Lado a lado
    std::cout << "\n \n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) { //esse for desenha o padrão A
            std::cout << "* ";
        }
        for (int k = 10; k >= i; k--) { //separa o A do B
            std::cout << "  ";
        }

        for (int l = 10; l >= i; l--) { //desenha o B
            std::cout << " *";
        }

        for (int m = 1; m <= i; m++) { //separa B e C
            std::cout << "  ";
        }

        for (int n = 1; n <= i; n++) {
            std::cout << "  ";
        }

        for (int o = 1; o <= 11 - i; o++) {
            std::cout << "* ";
        }

        for (int p = 10; p >= i; p--) {
            std::cout << "  ";
        }

        for (int q = 1; q <= i; q++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}
