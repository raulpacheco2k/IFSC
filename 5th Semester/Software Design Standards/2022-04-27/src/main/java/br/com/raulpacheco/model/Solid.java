package br.com.raulpacheco.model;

public class Solid extends States {

    private static Solid instance;

    protected Solid() {
    }

    public static Solid getInstance() {
        if (instance == null) {
            instance = new Solid();
        }
        return instance;
    }

    @Override
    public void solid(Water water) {
        throw new IllegalStateException("The water is already in a solid state.");
    }

    @Override
    public void liquid(Water water) {
        System.out.println("Through the melting process, the water is now in a liquid state.");
        water.setState(Liquid.getInstance());
    }

    @Override
    public void gaseous(Water water) {
        System.out.println("Through the deposition process, the water is now in a gaseous state.");
        water.setState(Gaseous.getInstance());
    }
}
