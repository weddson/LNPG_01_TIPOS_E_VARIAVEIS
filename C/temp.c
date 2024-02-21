#include <stdio.h>

// Solicita a operação
int main(){
    float numero;
    printf("Qual o temperatura em Celcius voce quer converter para Fahrenheit?\n");
    scanf("%f", &numero);

    
    printf("A temperatura em Fahrenheit e: %.2f\n", (numero * 1.8) + 32);

    float num1;
    printf("Digite qualquer coisa para encerrar o programa. \n");
    scanf("%s", &num1);
    return 0;
}