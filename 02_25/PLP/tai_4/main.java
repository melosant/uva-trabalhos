import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Collections;

public class Main {

    public static List<Integer> filtrarPares(List<Integer> lista) {
        // Condição base: lista vazia (if not lista)
        if (lista.isEmpty()) {
            return new ArrayList<>();
        }

        // Obtém o primeiro elemento
        int primeiro = lista.get(0);
        
        // Obtém o restante da lista (simula lista[1:])
        // Cria uma sublista, que é uma nova List, mantendo a imutabilidade do original
        List<Integer> restante = lista.subList(1, lista.size());

        if (primeiro % 2 == 0) { // mantém se for par
            // 1. Chama a recursão para o restante
            List<Integer> resultadoRestante = filtrarPares(restante);
            
            // 2. Concatena: [primeiro] + resultadoRestante
            // Cria uma nova lista para o resultado
            List<Integer> resultado = new ArrayList<>();
            resultado.add(primeiro); // Adiciona o elemento par atual
            resultado.addAll(resultadoRestante); // Adiciona o resultado da recursão
            
            return resultado;

        } else {
            // senão apenas ignora e continua a recursão
            return filtrarPares(restante);
        }
    }

    public static List<Integer> filtrarImpares(List<Integer> lista) {
        // Condição base: lista vazia
        if (lista.isEmpty()) {
            return new ArrayList<>();
        }

        int primeiro = lista.get(0);
        List<Integer> restante = lista.subList(1, lista.size());
        
        if (primeiro % 2 != 0) { // mantém se for ímpar
            // 1. Chama a recursão para o restante
            List<Integer> resultadoRestante = filtrarImpares(restante);
            
            // 2. Concatena: [primeiro] + resultadoRestante
            List<Integer> resultado = new ArrayList<>();
            resultado.add(primeiro); // Adiciona o elemento ímpar atual
            resultado.addAll(resultadoRestante); // Adiciona o resultado da recursão
            
            return resultado;
        }
        
        // senão apenas ignora e continua a recursão
        return filtrarImpares(restante);
    }

    public static void main(String[] args) {
        // Cria a lista de entrada de forma imutável (para simular a transparência referencial)
        List<Integer> lista_dados = Collections.unmodifiableList(
            Arrays.asList(1, 2, 3, 4, 5, 6)
        );

        System.out.println("---- TRANSPARÊNCIA REFERENCIAL ----");

        // Teste para pares
        System.out.println(filtrarPares(lista_dados)); 
        System.out.println(filtrarPares(lista_dados)); 

        System.out.println();

        // Teste para ímpares
        System.out.println(filtrarImpares(lista_dados)); 
        System.out.println(filtrarImpares(lista_dados)); 
    }
}