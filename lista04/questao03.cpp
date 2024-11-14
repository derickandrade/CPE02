#include <iostream>

int main() {
    
    for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 20; j++) {
            for (int k = 1; k <= 20; k++) {
                if ((i * i) + (j * j) == (k * k)) {
                    std::cout << '(' << i << ',' << j << ',' << k << ")\n";
                }
            }
        }
    }

    return 0;
}
