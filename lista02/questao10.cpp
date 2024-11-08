#include <stdio.h>

int main()
{
    int i;
    char string[6];
    int quantidades[5];
    printf("Insira 5 letras: ");
    scanf("%5s", string);
    for (i = 0; i < 5; i++){
        switch(string[i]){
            case 'a':
            quantidades[0]++;
            string[i] = 'i';
            break;
            
            case 'e':
            quantidades[1]++;
            string[i] = 'o';
            break;
            
            case 'i':
            quantidades[2]++;
            string[i] = 'u';
            break;
            
            case 'o':
            quantidades[3]++;
            break;
            
            case 'u':
            quantidades[4]++;
            break;
           
        }
    }
    printf("\nA = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", quantidades[0], quantidades[1], quantidades[2], quantidades[3], quantidades[4]);
    printf("A string criptografada e: %s", string);
    return 0;
}
