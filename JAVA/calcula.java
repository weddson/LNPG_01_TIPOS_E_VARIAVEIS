// Calculadora que realiza as 4 operações básicas
// Soma, subtração, multiplicação e divisão
// Solicita a operação
// Solicita os números
// Retorna o resultado

import java.util.Scanner;

class calcula {

    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Primeiro número:");
        int num1 = scanner.nextInt();

        
        System.out.println("Segundo número:");
        int num2 = scanner.nextInt();

        
        System.out.println("Resultado da adição: " + (num1 + num2));
        System.out.println("Resultado da subtração: " + (num1 - num2));
        System.out.println("Resultado da multiplicação: " + (num1 * num2));
        System.out.println("Resultado da divisão: " + ((double) num1 / num2));
    }
}