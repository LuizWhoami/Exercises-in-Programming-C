#include <stdio.h>

int main(){
    
    int x;
    printf("Ecolha um numero");
    scanf("%d", &x); // o %d é como se fosse o {} em python, e o &x ele puxa a variavel

    printf("Valor x = %d \n", x);

    return 0;
}