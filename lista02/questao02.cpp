#include <stdio.h>

int input(){
    int x;
    printf("Insira um numero inteiro: ");
    scanf("%d", &x);
    return x;
}

int main(){

    int a{input()};
    int b{input()};

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d x %d = %d\n", a, b, a * b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d / %d = %f\n", a, b, static_cast<float>(a)/b);

    return 0;
}
