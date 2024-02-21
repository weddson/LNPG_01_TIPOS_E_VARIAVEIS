#include <stdio.h>

// Solicita a operação
int main(){
    int idade;
    int nota[3];
    int peso[3];

    for (int i = 1; i < 4; i++) {

    printf("Qual a nota %d?\n", i);
    scanf("%d", &nota[i]);

    printf("Qual o peso %d?\n", i);
    scanf("%d", &peso[i]);

    }
    int pesofinal = peso[1] + peso[2] + peso[3];
    int notafinal = (nota[1] * peso[1]) + (nota[2] * peso[2]) + (nota[3] * peso[3]);
    printf("A media ponderada e: %.2f\n", (float)(notafinal / pesofinal));

    float num1;
    printf("Digite qualquer coisa para encerrar o programa. \n");
    scanf("%s", &num1);
    return 0;
}