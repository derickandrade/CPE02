#include <iostream>

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
    double euler = 0;
    for (int i = 0; i <= 10; i++) {
        euler += (1.0 / fatorial(i));
    }
    std::cout << "e = " << euler;
    return 0;
}
