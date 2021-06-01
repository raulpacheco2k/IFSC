public class Person {
    protected String name;
    protected String gender;
    protected String eyeColor;
    protected float height;
    protected float weight;

    public Person(String name, String gender, String eyeColor, float height, float weight){
        this.name = name;
        this.gender = gender;
        this.eyeColor = eyeColor;
        this.height = height;
        this.weight = weight;
    }

    public float imc(){
        return weight / (height * height);
    }
}
