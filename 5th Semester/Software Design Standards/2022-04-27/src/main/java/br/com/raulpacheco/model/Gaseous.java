package br.com.raulpacheco.model;

public class Gaseous extends States {

    private static Gaseous instance;

    protected Gaseous() {
    }

    public static Gaseous getInstance() {
        if (instance == null) {
            instance = new Gaseous();
        }
        return instance;
    }

    @Override
    public void solid(Water water) {
        System.out.println("Through the sublimation process, the water is now in a solid state.");
        water.setState(Solid.getInstance());
    }

    @Override
    public void liquid(Water water) {
        System.out.println("Through the freezing condensation, the water is now in a liquid state.");
        water.setState(Liquid.getInstance());
    }

    @Override
    public void gaseous(Water water) {
        throw new IllegalStateException("The water is already in the gaseous state.");
    }
}
