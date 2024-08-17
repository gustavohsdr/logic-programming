import java.util.Locale;
import java.util.Scanner;

public class crescente {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int primeiroValor, segundoValor;
		
		while (true) {
			System.out.println("Digite dois numeros: ");
			primeiroValor = sc.nextInt();
			segundoValor = sc.nextInt();
			
			if (primeiroValor == segundoValor) {
				System.out.println("Encerrar programa");
				break;
	
			} else if (primeiroValor < segundoValor) {
				System.out.println("CRESCENTE!");
			} else {
				System.out.println("DECRESCENTE");
			}
		}
		
		sc.close();
	}

}
