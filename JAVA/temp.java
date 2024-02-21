import java.util.Scanner;

public class temp {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Qual a temperatura em Celcius?");
        double num1 = scanner.nextDouble();
        
        double resultado = ((num1 * 1.8) + 32);
        System.out.println(resultado);
    }
}
