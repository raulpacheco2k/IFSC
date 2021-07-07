import java.util.Scanner;

public class CatalogarAnimais {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String type;
        String weight;
        String height;
        String gender;
        String neighborhood;
        String situation;
        int approximateAge;

        int male = 0;
        int female = 0;
        int dog = 0;
        int center = 0;

        for(int i = 1; i <= 16; ++i){
            System.out.print("Tipo do animal: ");
            type = scanner.nextLine();

            System.out.print("Peso do animal: ");
            weight = scanner.nextLine();

            System.out.print("Altura do animal: ");
            height = scanner.nextLine();

            System.out.print("Sexo do animal: ");
            gender = scanner.nextLine();

            System.out.print("Qual bairro o animal foi encontrado: ");
            neighborhood = scanner.nextLine();

            System.out.print("Qual a situação do animal: ");
            situation = scanner.nextLine();

            System.out.print("Qual a idade aproximada do animal: ");
            approximateAge = scanner.nextInt();

            try {
                Animal animal = new Animal(type, weight, height, gender, neighborhood, situation, approximateAge);

                if (animal.getGender().toUpperCase().equalsIgnoreCase("M")){
                    male++;
                } else {
                    female++;
                }

                if (animal.getType().toUpperCase().equalsIgnoreCase("cachorro") || animal.getType().toUpperCase().equalsIgnoreCase("cão")){
                    dog++;
                }

                if (animal.getNeighborhood().toUpperCase().equalsIgnoreCase("centro")){
                    center++;
                }
            } catch (Exception $e){
                System.out.print("Ocorreu um erro " + $e);
            }
        }

        if (male > female) {
            System.out.print("\nA maioria dos animais capturados são do sexo masculino");
        } else {
            System.out.print("\nA maioria dos animais capturados são do sexo feminino");
        }

        if (dog > (male + female)/2) {
            System.out.print("\nOs cachorros represetam mais da metade dos animais capturados");
        } else{
            System.out.print("\nOs cachorros não represetam mais da metade dos animais capturados");
        }

        System.out.print("\nQuantidade de animais capturados no centro: " + center);

    }
}
