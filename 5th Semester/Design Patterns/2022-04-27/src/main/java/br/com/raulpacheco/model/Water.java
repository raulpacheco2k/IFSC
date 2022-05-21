package br.com.raulpacheco.model;

public class Water {

    private States state;

    public Water() {
        this.state = Solid.getInstance();
    }

    public void setState(States state) {
        this.state = state;
    }

    public void solid() {
        this.state.solid(this);
    }

    public void liquid() {
        this.state.liquid(this);
    }

    public void gaseous() {
        this.state.gaseous(this);
    }
}
