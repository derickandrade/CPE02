#include <stdio.h>

float fahrenheit(int celsius){
    return (celsius * 9/5) + 32;
}

int main(){
    int temp;
    for (int i = 0; i <= 100; i += 5){
        for (int j = 0; j < 5; j++){
        printf("%d°C = %.1f°F | ", i+j, fahrenheit(i+j));
        }
        printf("\n");
    }
    return 0;
}
