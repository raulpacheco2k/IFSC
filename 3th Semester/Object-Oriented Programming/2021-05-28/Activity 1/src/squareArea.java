import java.util.Scanner;

public class squareArea {
    public static void main(String[] args) {
        double squareArea = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Type one side of the square. ");

        squareArea = scanner.nextFloat();
        squareArea = Math.pow(squareArea, 2);

        System.out.println("The square area is " + squareArea);
    }
}
