import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, m;

        System.out.print("Masukkan jumlah mahasiswa: ");
        n = input.nextInt();
        System.out.print("Masukkan jumlah mata pelajaran: ");
        m = input.nextInt();

        double[][] nilai = new double[n][m];
        double[] total = new double[m];

        for (int i = 0; i < n; i++) {
            System.out.println("Masukkan nilai untuk mahasiswa ke-" + (i + 1) + ":");
            for (int j = 0; j < m; j++) {
                System.out.print("Mata pelajaran ke-" + (j + 1) + ": ");
                nilai[i][j] = input.nextDouble();
                total[j] += nilai[i][j];
            }
        }

        System.out.println("Rata-rata nilai untuk setiap mata pelajaran:");
        for (int j = 0; j < m; j++) {
            double rata_rata = total[j] / n;
            System.out.println("Mata pelajaran ke-" + (j + 1) + ": " + rata_rata);
        }
    }
}
