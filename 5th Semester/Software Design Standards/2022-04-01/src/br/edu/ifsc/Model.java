package br.edu.ifsc;

public class Model {
    protected Brand brand;
    private String name;

    public Model(String brandName, String name) {
        this.brand = new Brand(brandName);
        this.name = name;
    }

    public Brand getBrand() {
        return brand;
    }

    public String getBrandName() {
        return brand.getName();
    }

    public String getName() {
        return name;
    }
}
