import java.util.Scanner;

public class CalculateImc {
    public static void main(String[] args) {
        String name;
        String gender;
        String eyeColor;
        float height;
        float weight;

        Scanner scanner = new Scanner(System.in);

        System.out.println("What is your name? ");
        name = scanner.next();

        System.out.println("What is your gender?");
        gender = scanner.next();

        System.out.println("What color are your eyes?");
        eyeColor = scanner.next();

        System.out.println("What is your height?");
        height = scanner.nextFloat();

        System.out.println("What is your weight? ");
        weight = scanner.nextFloat();

        Person person = new Person(name, gender, eyeColor, height, weight);

        System.out.println("The calculation of BMI is" + person.imc());
    }
}
