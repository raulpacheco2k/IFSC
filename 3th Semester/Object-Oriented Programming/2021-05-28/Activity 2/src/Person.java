public class Person {
    private String name;
    private String gender;
    private String eyeColor;
    private float height;
    private float weight;

    public Person(String name, String gender, String eyeColor, float height, float weight){
        this.setName(name);
        this.setGender(gender);
        this.setEyeColor(eyeColor);
        this.setHeight(height);
        this.setWeight(weight);
    }

    public float imc(){
        return getWeight() / (getHeight() * getHeight());
    }

    public String getName() {
        return name;
    }

    public Person setName(String name) {
        this.name = name;
        return this;
    }

    public String getGender() {
        return gender;
    }

    public Person setGender(String gender) {
        this.gender = gender;
        return this;
    }

    public String getEyeColor() {
        return eyeColor;
    }

    public Person setEyeColor(String eyeColor) {
        this.eyeColor = eyeColor;
        return this;
    }

    public float getHeight() {
        return height;
    }

    public Person setHeight(float height) {
        this.height = height;
        return this;
    }

    public float getWeight() {
        return weight;
    }

    public Person setWeight(float weight) {
        this.weight = weight;
        return this;
    }
}
