package br.edu.ifsc;

public class Vehicle {
    Model model;
    String plate;

    public Vehicle(String brandName, String modelName, String plate) {
        this.model = new Model(brandName, modelName);
        this.plate = plate;
    }

    public String displayData() {
        return "Brand: " + this.model.getBrandName() +
                "\nModel: " + this.model.getName() +
                "\nPlate: " + plate;
    }
}
