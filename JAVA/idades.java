import java.util.Locale;
import java.util.Scanner;

public class idades {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String primeiroNome, segundoNome;
		int primeiraIdade, segundaIdade;
		double mediaIdade;
		
		System.out.println("Dados da primeira pessoa: ");
		System.out.print("Nome: ");
		primeiroNome = sc.nextLine();
		System.out.print("Idade: ");
		primeiraIdade = sc.nextInt();
		
		sc.nextLine();
		
		System.out.println("Dados da seginda pessoa: ");
		System.out.print("Nome: ");
		segundoNome = sc.nextLine();
		System.out.print("Idade: ");
		segundaIdade = sc.nextInt();
		
		mediaIdade = ((primeiraIdade + segundaIdade) / 2.0);
		
		System.out.printf("A idade media de  %s e %s é de %.1f", primeiroNome, segundoNome, mediaIdade);
		
		sc.close();
		
		
		
	}

}
