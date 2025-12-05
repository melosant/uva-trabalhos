/*
 * TAI-5 -> Paradigma Orientado a Objeto
 * Sistema de Produtos
 */

// Classe base
class Produto {
    // Atributos privados (Encapsulamento)
    private String nome;
    private double preco;

    // Construtor
    public Produto(String nome) {
        this.nome = nome;
        this.preco = -1.0;
    }

    // Métodos de acesso (Getters e Setters)
    public String getNome() {
        return this.nome;
    }

    public double getPreco() {
        return this.preco;
    }

    public void setPreco(double novoPreco) {
        if (novoPreco >= 0) {
            this.preco = novoPreco;
        } else {
            System.out.printf("ERRO: O preço do produto %s não pode ser negativo.%n", this.nome);
        }
    }

    // Método para exibir detalhes
    public void exibirDetalhes() {
        if (this.preco > 0) {
            System.out.printf("Produto : %s   |   Preço : R$%.2f%n", this.nome, this.preco);
        } else if (this.preco == 0) {
            System.out.printf("Produto : %s   |   Preço : Gratuito%n", this.nome);
        } else {
            System.out.printf("Produto : %s   |   Preço : Não Informado.%n", this.nome);
        }
    }
}

// Classe derivada (Herança)
class Eletronico extends Produto {
    private int voltagem;

    public Eletronico(String nome, int voltagem) {
        super(nome); // Chama o construtor da classe pai
        this.voltagem = voltagem;
    }

    public void exibirDetalhes() {
        // Como os atributos são privados na classe pai, usamos os getters (getNome e getPreco)
        System.out.printf("Produto : %s   |   Preço : R$%.2f   |   Voltagem : %dw%n", 
                          this.getNome(), this.getPreco(), this.voltagem);
    }
}

// Classe principal para execução (Main)
public class Main {
    public static void main(String[] args) {
        Produto p1 = new Produto("Caderno");
        p1.setPreco(18.50);

        Produto p2 = new Produto("Tênis");
        p2.setPreco(0.0);

        Produto p3 = new Produto("Par de Meias");
        p3.setPreco(-10);

        Eletronico e1 = new Eletronico("Liquidificador", 110);
        e1.setPreco(229.99);
        
        Eletronico e2 = new Eletronico("Micro-ondas", 220);
        e2.setPreco(149.49);

        System.out.println();
        p1.exibirDetalhes();
        p2.exibirDetalhes();
        p3.exibirDetalhes();
        e1.exibirDetalhes();
        e2.exibirDetalhes();
    }
}