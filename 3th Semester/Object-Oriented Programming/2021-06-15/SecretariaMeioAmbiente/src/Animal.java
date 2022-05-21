public class Animal{
    private String type;
    private String weight;
    private String height;
    private String gender;
    private String neighborhood;
    private String situation;
    private int approximateAge;

    public Animal(
            String type,
            String weight,
            String height,
            String gender,
            String neighborhood,
            String situation,
            int approximateAge
            ){
        this.setType(type);
        this.setWeight(weight);
        this.setHeight(height);
        this.setGender(gender);
        this.setNeighborhood(neighborhood);
        this.setSituation(situation);
        this.setApproximateAge(approximateAge);
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getWeight() {
        return weight;
    }

    public void setWeight(String weight) {
        this.weight = weight;
    }

    public String getHeight() {
        return height;
    }

    public void setHeight(String height) {
        this.height = height;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getNeighborhood() {
        return neighborhood;
    }

    public void setNeighborhood(String neighborhood) {
        this.neighborhood = neighborhood;
    }

    public String getSituation() {
        return situation;
    }

    public void setSituation(String situation) {
        this.situation = situation;
    }

    public int getApproximateAge() {
        return approximateAge;
    }

    public void setApproximateAge(int approximateAge) {
        this.approximateAge = approximateAge;
    }
}
