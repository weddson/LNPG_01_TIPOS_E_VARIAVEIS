import java.util.Scanner;

class idade {

    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Qual sua idade?");
        int num1 = scanner.nextInt();

        String resultado = (num1 < 18) ? "Você é menor de idade." : "Você é maior de idade";
        System.out.println(resultado);
    }
}