public class Person {
    private String name;
    private String city;
    private String neighborhood;
    private String gender;
    private String profession;
    private String phone;
    private int yearOfBirth;

    public Person(
            String name,
            String city,
            String neighborhood,
            String gender,
            String profession,
            int yearOfBirth,
            String phone){
        this.setName(name) ;
        this.setCity(city);
        this.setNeighborhood(neighborhood);
        this.setGender(gender);
        this.setProfession(profession);
        this.setYearOfBirth(yearOfBirth);
        this.setPhone(phone);
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCity() {
        return city;
    }

    public void setCity(String city) {
        this.city = city;
    }

    public String getNeighborhood() {
        return neighborhood;
    }

    public void setNeighborhood(String neighborhood) {
        this.neighborhood = neighborhood;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getProfession() {
        return profession;
    }

    public void setProfession(String profession) {
        this.profession = profession;
    }

    public int getYearOfBirth() {
        return yearOfBirth;
    }

    public void setYearOfBirth(int yearOfBirth) {
        this.yearOfBirth = yearOfBirth;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }
}
