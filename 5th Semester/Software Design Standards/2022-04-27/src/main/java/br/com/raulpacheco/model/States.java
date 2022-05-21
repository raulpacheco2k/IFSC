package br.com.raulpacheco.model;

public abstract class States {

    public abstract void solid(Water water);

    public abstract void liquid(Water water);

    public abstract void gaseous(Water water);
}