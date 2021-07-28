abstract public class Animals {
    private String gender;
    private int weight;
    static private int counter;
    static private int male;
    static private int female;

    public Animals(String gender, int weight) {
        this.setGender(gender);
        this.setWeight(weight);
    }

    public String getGender() {
        return gender;
    }

    private void setGender(String gender) {
        this.gender = gender;
    }

    public float getWeight() {
        return weight;
    }

    private void setWeight(int weight) {
        this.weight = weight;
    }

    public static int getCounter(){
        return counter;
    }

    public static void incrementCounter(){
        counter++;
    }

    public static int getMale(){
        return male;
    }

    public static void incrementMale(){
        male++;
    }

    public static int getFemale(){
        return female;
    }

    public static void incrementFemale(){
        female++;
    }
}
