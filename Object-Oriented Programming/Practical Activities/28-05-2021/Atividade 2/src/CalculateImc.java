import java.util.Scanner;

public class CalculateImc {
    public static void main(String[] args) {
        String name;
        String gender;
        String eyeColor;
        float height;
        float weight;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe o nome:");
        name = scanner.next();

        System.out.println("Informe o género:");
        gender = scanner.next();

        System.out.println("Informe a cor dos olhos:");
        eyeColor = scanner.next();

        System.out.println("Informe a altura:");
        height = scanner.nextFloat();

        System.out.println("Informe o peso:");
        weight = scanner.nextFloat();

        Person person = new Person(name, gender, eyeColor, height, weight);

        System.out.println("O cálculo do IMC é " + person.imc());
    }
}
