import java.util.Locale;
import java.util.Scanner;

public class retangulo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double valorBase, valorAltura, area, perimetro, diagonal;
		
		System.out.print("Base do retangulo: ");
		valorBase = sc.nextDouble();
		
		System.out.print("Altura do retangulo: ");
		valorAltura = sc.nextDouble();
		
		area = (valorBase * valorAltura);
		
		perimetro = ((valorBase * 2) + (valorAltura * 2));
		
		diagonal = Math.sqrt(Math.pow(valorBase, 2) + Math.pow(valorAltura, 2));
		
		System.out.printf("AREA = %.4f%n", area);

		System.out.printf("PERIMETRO = %.4f%n", perimetro);
		
		System.out.printf("DIAGONAL = %.4f%n", diagonal);
		
		sc.close();
		
	}

}
