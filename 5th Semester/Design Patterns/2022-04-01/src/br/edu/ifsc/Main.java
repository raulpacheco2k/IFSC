package br.edu.ifsc;

public class Main {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle(
                "Volkswagen",
                "Gol",
                "ABC-435"
        );

        System.out.print(vehicle.displayData());
    }
}