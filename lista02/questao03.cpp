#include <stdio.h>

float input(){
    float x;
    printf("Insira o valor do raio do circulo em centimetros: ");
    scanf("%f", &x);
    return x;
}

int main(){

    float a{input()};

    printf("Um circulo com raio de %f cm tem diametro igual a %f cm e area igual a %f cm²\n", a, a * 2, a * a * 3.14159);


    return 0;
}
