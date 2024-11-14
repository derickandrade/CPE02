#include <iostream>

int main() {
	char resposta;
	int menor = 1;
	int maior = 100;
	int metade;
	std::cout << "Pense em um número entre 1 e 100\n";

	while (menor != maior) {
		metade = (maior + menor) / 2;
		std::cout << "O seu número é menor ou igual a " << metade << "? (s/n)\n";
		std::cin >> resposta;

		if (resposta == 's') {
			maior = metade;
		}
		else {
			menor = metade+1;
		}
	}
	std::cout << "O seu número é: " << maior << ".\n";
	return 0;
}
