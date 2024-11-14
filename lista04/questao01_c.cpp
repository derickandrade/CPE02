#include <iostream>
#include <cmath>

int fatorial(int numero){
    int resultado = 1;

    if (numero == 0) {
        numero = 1;
    }

    else {
        for (int i = 1; i <= numero; i++) {
            resultado = resultado * i;
        }
    }

    return resultado;
}

int main() {
    double euler_x = 1;
    float x;
    std::cout << "Informe o valor de x: ";
    std::cin >> x;
    if (x != 0) {
        for (int i = 1; i <= 10; i++) {
            euler_x += (pow(x,i) / fatorial(i));
        }
    }
    std::cout << "e^(" << x << ") = " << euler_x;

    return 0;
}
