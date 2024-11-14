#include <iostream>

int main() {

	int numeros[5];

	std::cout << "Insira 5 números de 1 a 30:\n";
	std::cin >> numeros[0] >> numeros[1] >> numeros[2] >> numeros[3] >> numeros[4];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < numeros[i]; j++) {
			std::cout << '*';
		}
		std::cout << '\n';
	}

	return 0;
}
