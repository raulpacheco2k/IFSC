import java.util.Scanner;

public class squareArea {
    public static void main(String[] args) {
        double squareArea = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Dada determinada unidade de medida, informe o lado A do quadrado.");

        squareArea = scanner.nextFloat();
        squareArea = Math.pow(squareArea, 2);

        System.out.println("A área do quadrado é " + squareArea);
    }
}
