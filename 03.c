#include <stdio.h> 

// constantes

#define varconst 100;

int main(){
    printf("Contantes");
    int x;
    x = varconst;
    printf("Variavel const: %d \n", x);
    return 0;
}

#define pi 3.14
int main(){
    const float g = 9.8;
    prinf("\n pi =  %f", pi);
    printf("\n G = %f", g);
    return 0; 
}
// Tipos de Variaveis
    //int idade, num;
    //float salario = 70.23;
    //double qtd_atomos;
    //bool confirma = falsa;
    //char genero = 'M';

// Principais Tipos primitivos e modificadores

int main(){
    printf("Tipos");
    char caractere;
    float valor1, valor2;

    printf("\n  Digite qualquer caracter: ");
    scanf("%c", &caractere);
    printf("\n Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("\n Digite o segundo valor: ");
    scanf("%f", &valor2);


    printf("Variavel 1: %c \n", caractere);
    printf("Variavel 2: %.2f \n", valor1);
    printf("Variavel 3: %.2f \n", valor2);
    return 0;
}