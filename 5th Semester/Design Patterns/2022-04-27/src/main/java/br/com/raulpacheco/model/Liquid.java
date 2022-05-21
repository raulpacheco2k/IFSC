package br.com.raulpacheco.model;

public class Liquid extends States {

    private static Liquid instance;

    protected Liquid() {
    }

    public static Liquid getInstance() {
        if (instance == null) {
            instance = new Liquid();
        }
        return instance;
    }


    @Override
    public void solid(Water water) {
        System.out.println("Through the freezing process, the water is now in a solid state.");
        water.setState(Solid.getInstance());
    }

    @Override
    public void liquid(Water water) {
        throw new IllegalStateException("The water is already in the liquid state.");
    }

    @Override
    public void gaseous(Water water) {
        System.out.println("Through the process of evaporation, the water is now in a gaseous state.");
        water.setState(Gaseous.getInstance());
    }
}
