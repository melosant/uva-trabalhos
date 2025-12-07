import java.util.ArrayList;
import java.util.List;

abstract class Pessoa {
    /*
     * Classe Pai abstrata - não pode ser instanciada diretamente.
     */
    public String nome;
    public int idade;

    // Construtor (equivalente ao __init__)
    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    // Define método como abstrato; as subclasses são obrigadas a implementar.
    public abstract String realizarAtividade();

    public void apresentar() {
        System.out.printf("Olá, meu nome é %s e tenho %d anos.%n", this.nome, this.idade);
    }
}

class Professor extends Pessoa {
    private String disciplina;

    public Professor(String nome, int idade, String disciplina) {
        // chama o construtor da classe pai (super().__init__)
        super(nome, idade);
        this.disciplina = disciplina;
    }

    // Sobrescrita (override) da abstrata. Implementação específica para Professor.
    @Override
    public String realizarAtividade() {
        return String.format("%s está lecionando a matéria : %s.", this.nome, this.disciplina);
    }
}

class Aluno extends Pessoa {
    private String matricula;

    public Aluno(String nome, int idade, String matricula) {
        // chama o construtor da classe pai
        super(nome, idade);
        this.matricula = matricula;
    }

    // Sobrescrita (override) da abstrata. Implementação específica para Aluno.
    @Override
    public String realizarAtividade() {
        return String.format("%s (Matrícula : %s) está estudando para prova.", this.nome, this.matricula);
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("-----    Demonstração de Herança e Classe Abstrata    -----\n");

        Professor p1 = new Professor("André", 35, "Paradigmas de Linguagens de Programação");
        Aluno p2 = new Aluno("Nathã", 18, "1250109474");
        // Pessoa p3 = new Pessoa("João", 25); // Dará ERRO ao tentar instanciar a classe abstrata.

        // Lista para exemplo de polimorfismo
        List<Pessoa> lista = new ArrayList<>();
        lista.add(p1);
        lista.add(p2);

        for (Pessoa pessoa : lista) {
            // Chamada usa método da classe Pessoa, mas é executado na classe real Professor/Aluno
            String atividade = pessoa.realizarAtividade();
            pessoa.apresentar(); // método herdado base

            System.out.println("Atividade Principal : " + atividade); // método polimórfico
            System.out.println("-".repeat(30));
            System.out.println();
        }
    }
}