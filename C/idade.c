#include <stdio.h>

// Solicita a operação
int main(){
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Voce e %s\n", (idade < 18  ? "Menor de idade":"Maior de idade"));

    float num1;
    printf("Digite qualquer coisa para encerrar o programa. \n");
    scanf("%s", &num1);
    return 0;
}