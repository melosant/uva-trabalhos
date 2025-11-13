import java.util.List;
import java.util.Scanner;
import java.util.function.Function;
import java.util.stream.Collectors;

/*
 * Trabalho Avaliativo Individual 3 - TAI-3
 * Aluno: Nathã de Melo Santos
 * Matrícula: 1250109474
 * Paradigmas de Linguagem de Programação
*/

public class Main {

    // A coleção original de notas é imutável usando List.of().
    private static final List<Double> NOTAS_ORIGINAIS = List.of(6.5, 10.0, 8.0, 9.4, 4.5, 3.7, 7.5, 7.0);

    // função pura
    public static double mediaGeral(List<Double> notasTurma) {
        // stream() não modifica a lista original.
        // reduce() aplica a operação de soma.
        double soma = notasTurma.stream()
                .reduce(0.0, (a, b) -> a + b); // Equivalente ao reduce do Python

        if (notasTurma.isEmpty()) {
            return 0.0;
        }
        return soma / notasTurma.size();
    }

    // utilização do filter
    public static List<Double> aprovados(List<Double> notasTurma) {
        return notasTurma.stream()
                .filter(nota -> nota >= 7.0) // Equivalente ao filter com lambda
                .collect(Collectors.toList()); // Cria uma NOVA lista
    }

    public static List<Double> reprovados(List<Double> notasTurma) {
        return notasTurma.stream()
                .filter(nota -> nota < 7.0)
                .collect(Collectors.toList()); // Cria uma NOVA lista
    }

    public static String analiseAproveitamento(List<Double> notas, Function<List<Double>, Double> calculadorMedia) {
        // 1. Chama a função que foi passada como parâmetro
        double media = calculadorMedia.apply(notas);

        // 2. Retorna o resultado da análise
        if (media >= 7.0) {
            return "TURMA COM APROVEITAMENTO ACIMA DA MÉDIA!";
        } else {
            return "TURMA COM BAIXO APROVEITAMENTO.";
        }
    }

    // função impura (imprime no console)
    public static void mostrarNotas() {
        // Acessa a variável estática e imprime no console.
        System.out.println("\nNOTAS DA TURMA : " + NOTAS_ORIGINAIS);
    }

    // função impura
    public static void exibirMenu() {
        // Apenas imprime o menu
        System.out.println("\n" + "=".repeat(22)); // .repeat() é uma forma moderna de "DRY"
        System.out.println("   NOTAS DA TURMA :");
        System.out.println("=".repeat(22));
        System.out.println("""

                O QUE DESEJA FAZER :
                1) MOSTRAR NOTAS
                2) EXIBIR APROVAÇÕES E REPROVAÇÕES
                3) MOSTAR ANÁLISE GERAL DA TURMA
                4) SAIR
                """);
    }

    public static void main(String[] args) {

        // Duas chamadas da função pura 'mediaGeral' com a *mesma entrada*
        // sempre produzirão a *mesma saída*.
        System.out.println("--- Demonstrando Transparência Referencial ---");
        List<Double> testeNotas = List.of(10.0, 5.0);
        double media1 = mediaGeral(testeNotas);
        double media2 = mediaGeral(testeNotas);
        System.out.println("Chamada 1 (mediaGeral([10.0, 5.0])): " + media1);
        System.out.println("Chamada 2 (mediaGeral([10.0, 5.0])): " + media2);
        System.out.println("As saídas são idênticas? " + (media1 == media2));
        System.out.println("----------------------------------------------");

        Scanner scanner = new Scanner(System.in);
        while (true) {
            exibirMenu();
            System.out.print("\n\nSELECIONE SUA OPÇÃO (1-4): ");
            int opcao = 0;
            try {
                // Usar nextLine() previne erros de buffer do Scanner
                opcao = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("\nSELECIONE UMA OPÇÃO VÁLIDA (NÚMERO)!");
                continue; // Volta ao início do loop
            }

            if (opcao < 1 || opcao > 4) {
                System.out.println("\nSELECIONE UMA OPÇÃO VÁLIDA (1-4)!");
                continue;
            }

            switch (opcao) {
                case 1:
                    mostrarNotas();
                    break;

                case 2:
                    System.out.println("\n--- Demonstração de Imutabilidade ---");
                    System.out.println("Notas Originais (Antes): " + NOTAS_ORIGINAIS);
                    
                    // As funções puras criam NOVAS listas
                    List<Double> alunosAcima = aprovados(NOTAS_ORIGINAIS);
                    List<Double> alunosAbaixo = reprovados(NOTAS_ORIGINAIS);
                    
                    System.out.println("Notas Originais (Depois): " + NOTAS_ORIGINAIS); // Permanece igual
                    System.out.println(" -> Aprovados (Nova Lista): " + alunosAcima);
                    System.out.println(" -> Reprovados (Nova Lista): " + alunosAbaixo);
                    System.out.println("-------------------------------------");
                    break;

                case 3:
                    // Chamada da função pura
                    double mediaTurma = mediaGeral(NOTAS_ORIGINAIS);

                    // Estamos passando a *função* 'mediaGeral' como parâmetro
                    // para a função 'analiseAproveitamento'.
                    String aproveitamento = analiseAproveitamento(NOTAS_ORIGINAIS, Main::mediaGeral);

                    mostrarNotas(); // Mostra que a original não mudou
                    System.out.printf("\nMÉDIA GERAL DA TURMA : %.2f%n", mediaTurma);
                    System.out.println("QTD. NOTAS ACIMA DA MÉDIA : " + aprovados(NOTAS_ORIGINAIS).size());
                    System.out.println("QTD. NOTAS ABAIXO DA MÉDIA : " + reprovados(NOTAS_ORIGINAIS).size());
                    System.out.println(aproveitamento);
                    break;

                case 4:
                    System.out.println("\n\nPROGRAMA FINALIZADO.");
                    scanner.close();
                    System.exit(0); // Encerra o programa
                    break;

                default:
                    System.out.println("\nSELECIONE UMA OPÇÃO VÁLIDA!");
                    break;
            }
        }
    }
}