/*
 * Trabalho Avaliativo Individual 2
 * Aluno : Nathã Melo
 * Relatório de Salários - Java
 */

// 1. IMPORTAÇÃO DE BIBLIOTECAS
// Usamos Scanner para ler a entrada do usuário
import java.util.Scanner;
// Usamos para lidar com erros de 'limparTela' e 'sleep'
import java.io.IOException;

// 2. CLASSE
// Em Java, todo o código deve pertencer a uma classe.
public class Main {

    // 3. VARIÁVEL GLOBAL (AGORA ESTÁTICA)
    // 'const' em C torna-se 'static final' em Java
    private static final double SALARIO_MIN = 1518.00;

    // 4. SCANNER (Substituto do scanf)
    // Criamos um 'leitor' global (estático) para o teclado
    private static Scanner scanner = new Scanner(System.in);

    /*----------------- PROCEDIMENTOS E FUNÇÕES (MÉTODOS) --------------------*/

    // A função 'main' do C torna-se o 'main' do Java
    public static void main(String[] args) {

        int funcionarios, opcao;

        limparTela(); // Equivalente ao system("cls")

        System.out.print("Digite o numero de funcionarios : ");
        // scanf("%d", &funcionarios) torna-se scanner.nextInt()
        funcionarios = scanner.nextInt();

        // A criação do vetor (array) é muito similar
        double[] salarios = new double[funcionarios];

        // Em Java, não precisamos passar o 'funcionarios'
        // pois o array 'salarios' já sabe seu próprio tamanho
        lerSalarios(salarios);

        while (true) {
            exibirMenu();
            System.out.print("\nQual opcao voce escolhe : ");
            opcao = scanner.nextInt();

            // Um 'switch' é uma alternativa elegante para o 'if/else if'
            switch (opcao) {
                case 1:
                    exibirRelatorio(salarios);
                    break;
                case 2:
                    reajuste(salarios);
                    break;
                case 3:
                    double folha = somaFolha(salarios);
                    // System.out.printf é idêntico ao printf do C
                    System.out.printf("\nVALOR TOTAL DA FOLHA : R$%.2f\n", folha);
                    break;
                case 4:
                    // Saímos do switch
                    break;
                case 5:
                    System.out.println("\nDIGITE UMA OPCAO VALIDA!");
                    break;
            }
            
            // Se a opção foi 4, quebramos o loop 'while'
            if (opcao == 4) {
                break;
            }
        }

        System.out.println("\nPrograma Finalizado!");
        scanner.close(); // Boa prática: fechar o scanner no final
    }

    /*
     * Procedimento para ler os salários
     * Nota: Não precisamos mais do 'num_funcionarios' como parâmetro.
     * Usamos 'salarios.length' para saber o tamanho.
     */
    public static void lerSalarios(double[] salarios) {
        for (int i = 0; i < salarios.length; i++) {
            System.out.printf("\nInforme o salario do %d. funcionario : R$", i + 1);
            // scanf("%lf", &salarios[i]) torna-se scanner.nextDouble()
            salarios[i] = scanner.nextDouble();
        }
    }

    /*
     * Procedimento para exibir o menu
     */
    public static void exibirMenu() {
        try {
            // Sleep(3000) do C torna-se Thread.sleep(3000) em Java
            // (precisa de try/catch)
            Thread.sleep(3000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        
        limparTela(); // Chamamos nossa função para limpar a tela

        // printf() do C torna-se System.out.println()
        System.out.println("===================");
        System.out.println("     MENU EMPRESA:");
        System.out.println("===================");
        System.out.println("O que deseja fazer ?");
        System.out.println("1. RELATORIO");
        System.out.println("2. APLICAR REAJUSTES");
        System.out.println("3. TOTAL DA FOLHA");
        System.out.println("4. SAIR");
    }

    /*
     * Procedimento para exibir o relatório
     * Usamos 'listaSalarios.length'
     */
    public static void exibirRelatorio(double[] listaSalarios) {
        int salariosAcima = 0;
        System.out.print("\nSALARIOS : ");
        
        for (int i = 0; i < listaSalarios.length; i++) {
            // System.out.printf() funciona exatamente como no C
            System.out.printf("R$%.2f  /  ", listaSalarios[i]);

            if (listaSalarios[i] > SALARIO_MIN) { // Acessa a var estática
                salariosAcima++;
            }
        }
        System.out.printf("\nSALARIOS ACIMA DO MINIMO : %d\n", salariosAcima);
    }

    /*
     * Procedimento para aplicar o reajuste
     * Usamos 'listaSalarios.length'
     */
    public static void reajuste(double[] listaSalarios) {
        for (int i = 0; i < listaSalarios.length; i++) {
            listaSalarios[i] *= 1.10; // A lógica é idêntica
        }

        System.out.println("\nAJUSTE DE 10 PORCENTO APLICADOS NOS SALARIOS.");
        System.out.print("\nSALARIOS ATUAIS : ");

        for (int i = 0; i < listaSalarios.length; i++) {
            System.out.printf("R$%.2f  /  ", listaSalarios[i]);
        }
        System.out.println(); // Apenas para pular uma linha no final
    }

    /*
     * Função para somar a folha
     * Usamos 'listaSalarios.length'
     */
    public static double somaFolha(double[] listaSalarios) {
        double total = 0.0;

        // Podemos usar um loop "for-each", que é mais moderno em Java
        for (double salario : listaSalarios) {
            total += salario;
        }
        // O loop 'for (int i = 0; ...)' do C também funcionaria
        
        return total;
    }

    /*
     * Função utilitária para limpar a tela (substitui system("cls"))
     * Esta é a forma "Java" de fazer isso
     */
    public static void limparTela() {
        try {
            // Verifica se o sistema é Windows
            if (System.getProperty("os.name").contains("Windows")) {
                // Executa o comando "cls" no cmd
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                // Comando para terminais Linux/Mac (ANSI)
                System.out.print("\033[H\033[2J");
                System.out.flush();
            }
        } catch (IOException | InterruptedException e) {
            // Se falhar, apenas imprime linhas em branco
            for (int i = 0; i < 30; i++) System.out.println();
        }
    }
}