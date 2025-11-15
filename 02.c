#include <stdio.h>

int main(){

    float num1, num2, media;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite o Segundo: ");
    scanf("%f", &num2);

    media = (num1 + num2)/2;
    printf("Media: %.2f \n", media);

    return 0;
}