#include <stdio.h>

int main(){

    int x{};
    int y{};
    int z{};

    x = 7 + 3 * 6/2 - 1;
    y = 2 % 2 + 2 * 2/2;
    z = (3 * 9 * (3 + (9 * 3/(3))));

    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);

    return 0;
}
