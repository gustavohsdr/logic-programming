import java.util.Locale;
import java.util.Scanner;

public class soma_impares {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		try (Scanner sc = new Scanner(System.in)) {
			int x, y, i, soma = 0;
			
			System.out.println("Digite dois numeros: ");
			x = sc.nextInt();
			y = sc.nextInt();
			
			
			if (x > y) {
			    int temp = x;
			    x = y;
			    y = temp;
			}
			
			for (i = x + 1; i < y; i++) {
				
				if (i % 2 != 0) {
					soma += i; 
				}
			}
			
			System.out.printf("Soma dos ímpares entre %d e %d é = %d%n", x, y, soma);
			   
			sc.close();
		}
	}
	
}


