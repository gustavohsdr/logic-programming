import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		try (Scanner sc = new Scanner(System.in)) {
			int N;
			int i;
			double soma = 0;
			double media = 0;
			
			System.out.println("Quantos numeros você vai digitar? ");
			N = sc.nextInt();
			
			double[] vet = new double[N];
			
			for (i = 0; i < N; i++) {
				System.out.print("Digite um número: ");
				vet[i] = sc.nextDouble();
			}
			
			System.out.print("VALORES = ");
			
			for (i = 0; i < N; i++) {
				soma += vet[i];
				media = (soma / N);
				System.out.printf("%.1f ", vet[i]);
			}
			
			System.out.printf("\nSOMA = %.2f%n", soma);
			
			System.out.printf("MEDIA = %.2f%n",  media);
			
			
			sc.close();
		}
	}

}
