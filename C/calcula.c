// Calculadora que realiza as 4 operações básicas
// Soma, subtração, multiplicação e divisão


#include <stdio.h>

// Solicita a operação
int main(){
    char operacao;
    printf("Qual operacao voce deseja realizar? +, -, * ou / \n");
    scanf("%s", &operacao);

// Solicita os números
    float num1, num2; 
    printf("Qual o primeiro numero? \n");
    scanf("%f", &num1);
    printf("Qual o segundo numero? \n");
    scanf("%f", &num2);

// Retorna o resultado
    switch(operacao)
    {
        case '+':
            printf("A soma e %.2f\n", num1 + num2);
            break;
        case '-':
            printf("O resultado da sub e %.2f\n", num1 - num2);
            break;
        case '/':
            printf("O resultado da divisao e %.2f\n", num1 / num2);
            break;
        case '*':
            printf("O resultado da %.2f\n", num1 * num2);
            break;
        default:
            printf("Operacao invalida.");
            break;
    }
    
    printf("Digite qualquer coisa para encerrar o programa. \n");
    scanf("%s", &num1);

    return 0;
}