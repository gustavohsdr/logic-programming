import java.util.Locale;
import java.util.Scanner;

public class menor_de_tres {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int numero1, numero2, numero3, menorValor;
		
		System.out.print("Primeiro Valor: ");
		numero1 = sc.nextInt();
		
		System.out.print("Segundo Valor: ");
		numero2 = sc.nextInt();
		
		System.out.print("Terceiro Valor; ");
		numero3 = sc.nextInt();
		
		menorValor = numero1;
		
		if (numero2 < menorValor) {
			menorValor = numero2;
					
		} else if (numero3 < menorValor) {
			menorValor = numero3;
		}
		
		System.out.printf("MENOR = %d", menorValor);
		
		
		sc.close();
		
	}

}
