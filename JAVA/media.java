import java.util.Scanner;

public class media {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int[] nota = new int[4];
        int[] peso = new int[4];

        for (int i = 1; i < 4; i++){
            System.out.println("Qual a nota" + i + "?");
            nota[i] = scanner.nextInt();
            
            System.out.println("Qual o peso" + i + "?");
            peso[i] = scanner.nextInt();
        }
        
        int pesofinal = peso[1] + peso[2] + peso[3];
        int notafinal = (nota[1] * peso[1]) + (nota[2] * peso[2]) + (nota[3] * peso[3]);
        double resultado = notafinal / pesofinal;

        System.out.println(resultado);
    }
}
