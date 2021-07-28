import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String registerMore;
        String gender;
        int weight;
        int totalWeight = 0;
        Scanner scanner = new Scanner(System.in);

        do {
            System.out.print("Qual o peso do animal: ");
            weight = scanner.nextInt();
            totalWeight += weight;

            System.out.print("Qual o sexo do animal? M para macho e F para Fêmea ");
            gender = scanner.next();

            try {
                Cat animal = new Cat(gender, weight);

                if (animal.getGender().equalsIgnoreCase("M")) {
                    Animals.incrementMale();
                } else {
                    Animals.incrementFemale();
                }

                Animals.incrementCounter();

            } catch (Exception $e) {
                System.out.print("Ocorreu um erro: " + $e);
            }

            System.out.print("Você deseja continuar? Caso sim escreva CONTINUE caso contrário QUIT: ");
            registerMore = scanner.next();

        } while (!registerMore.equalsIgnoreCase("QUIT"));

        System.out.print("\nForam cadastrados " + Animals.getCounter() + " animais.");
        System.out.print("\nForam cadastrados " + Animals.getMale() + " animais do sexo macho.");
        System.out.print("\nForam cadastrados " + Animals.getFemale() + " animais do sexo fêmea.");
        System.out.print("\nForam cadastrados " + totalWeight + "kg.");
    }
}