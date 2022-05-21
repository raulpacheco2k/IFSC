public class Main {

    public static void main(String[] args) {

        Livro l1 = new Livro("Design Patterns");
        Livro l2 = new Livro("Java Programming Language");

        l1.solicitar();    // Disponível -> Emprestado
        l1.solicitar();    // Ops, o livro já está emprestado
        l1.devolver();     // Emprestado -> Disponível

        l2.devolver();     // nada, o livro já está disponível
    }

}