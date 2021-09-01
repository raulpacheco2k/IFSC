package bo;

public class Servidores {
    private String nome;
    private String matricula;
    private String data_de_nascimento;
    private String local_de_nascimento;
    private String cidade_campus;
    private String tipo;
    private String email;
    private String fone;
    private String cpf;
    private String conselho;

    public Servidores(String nome, String matricula, String data_de_nascimento, String local_de_nascimento, String cidade_campus, String tipo, String email, String fone, String cpf, String conselho) {
        this.setNome(nome);
        this.setMatricula(matricula);
        this.setData_de_nascimento(data_de_nascimento);
        this.setLocal_de_nascimento(local_de_nascimento);
        this.setCidade_campus(cidade_campus);
        this.setTipo(tipo);
        this.setEmail(email);
        this.setFone(fone);
        this.setCpf(cpf);
        this.setConselho(conselho);
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getData_de_nascimento() {
        return data_de_nascimento;
    }

    public void setData_de_nascimento(String data_de_nascimento) {
        this.data_de_nascimento = data_de_nascimento;
    }

    public String getLocal_de_nascimento() {
        return local_de_nascimento;
    }

    public void setLocal_de_nascimento(String local_de_nascimento) {
        this.local_de_nascimento = local_de_nascimento;
    }

    public String getCidade_campus() {
        return cidade_campus;
    }

    public void setCidade_campus(String cidade_campus) {
        this.cidade_campus = cidade_campus;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getFone() {
        return fone;
    }

    public void setFone(String fone) {
        this.fone = fone;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getConselho() {
        return conselho;
    }

    public void setConselho(String conselho) {
        this.conselho = conselho;
    }

    @Override
    public String toString() {
        return "Servidores{" +
                "nome='" + nome + '\'' +
                ", matricula='" + matricula + '\'' +
                ", data_de_nascimento='" + data_de_nascimento + '\'' +
                ", local_de_nascimento='" + local_de_nascimento + '\'' +
                ", cidade_campus='" + cidade_campus + '\'' +
                ", tipo='" + tipo + '\'' +
                ", email='" + email + '\'' +
                ", fone='" + fone + '\'' +
                ", cpf='" + cpf + '\'' +
                ", conselho='" + conselho + '\'' +
                "}\n";
    }
}
