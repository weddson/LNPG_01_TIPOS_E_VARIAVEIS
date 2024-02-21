import java.util.Scanner;

public class impar {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Qual número quer verificar?");
        int num1 = scanner.nextInt();

        String resultado = (num1 % 2 == 0) ? "O número é par" : "O número é impar";
        System.out.println(resultado);
    }
}
