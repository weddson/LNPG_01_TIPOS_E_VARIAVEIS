// Calculadora que realiza as 4 operações básicas
// Soma, subtração, multiplicação e divisão


#include <stdio.h>

// Solicita a operação
int main(){
    int numero;
    printf("Qual o numero voce quer ver?\n");
    scanf("%d", &numero);

    printf("O numero e %s\n", (numero % 2 == 0  ? "par":"impar"));

    float num1;
    printf("Digite qualquer coisa para encerrar o programa. \n");
    scanf("%s", &num1);
    return 0;
}