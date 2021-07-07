import java.util.Calendar;
import java.util.Scanner;

public class FestaGastronomicaItaliana {
    public static void main(String[] args) {
        String another = "S";
        Scanner scanner = new Scanner(System.in);
        int currentYear = Calendar.getInstance().get(Calendar.YEAR);

        String name;
        String city;
        String neighborhood;
        String gender;
        String profession;
        String phone;
        int yearOfBirth;
        int totalNumberOfVisitors = 0;
        int numberOfMen = 0;
        int numberOfWomen = 0;
        int underAge = 0;

        System.out.println("### CADASTRO DE VISITANTE ###");

        while (another.equalsIgnoreCase("S")) {
            System.out.print("Nome: \n");
            name = scanner.nextLine();

            System.out.print("Cidade: \n");
            city = scanner.nextLine();

            System.out.print("Bairro: \n");
            neighborhood = scanner.nextLine();

            System.out.print("Género: M ou F \n");
            gender = scanner.nextLine();

            System.out.print("Profissão: \n");
            profession = scanner.nextLine();

            System.out.print("Ano de nascimento: \n");
            yearOfBirth = scanner.nextInt();

            System.out.print("Telefone: \n");
            phone = scanner.nextLine();

            try {
                Person person = new Person(name, city, neighborhood, gender, profession, yearOfBirth, phone);

                totalNumberOfVisitors++;

                if (person.getGender().equalsIgnoreCase("M")) {
                    numberOfMen++;
                } else {
                    numberOfWomen++;
                }

                if ((currentYear - yearOfBirth) < 18) {
                    underAge++;
                }
            } catch (Exception $e) {
                System.out.print("Ocorreu um erro: " + $e);
            }

            System.out.print("\nVocê deseja cadastrar mais um usuário?\n\tS - Para continuar\n\tN - Para ver os resultados\nSua resposta: ");
            another = scanner.nextLine();

            if (another.equalsIgnoreCase("N")) {
                break;
            }
        }

        System.out.print("\nTotal de visitantes: " + totalNumberOfVisitors);
        System.out.print("\nTotal de visitantes homens: " + numberOfMen + " equivalente a " + ((numberOfMen*100)/totalNumberOfVisitors) + "%");
        System.out.print("\nTotal de visitantes homens: " + numberOfWomen + " equivalente a " + ((numberOfWomen*100)/totalNumberOfVisitors) + "%");
        System.out.print("\nTotal de menor de idade: " + underAge);
    }
}
