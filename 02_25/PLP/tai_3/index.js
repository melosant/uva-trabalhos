/**
 * Trabalho Avaliativo Individual 3 - TAI-3
 * Aluno: Nathã de Melo Santos
 * Matrícula: 1250109474
 * Paradigmas de Linguagem de Programação
 */

// imutabilidade
// Usamos 'const' para declarar a variável.
// Usamos 'Object.freeze()' para tornar o array imutável (similar
// a uma 'tupla' do Python).
const NOTAS_ORIGINAIS = Object.freeze([6.5, 10.0, 8.0, 9.4, 4.5, 3.7, 7.5, 7.0]);

// função pura
const mediaGeral = (notasTurma) => {
    if (notasTurma.length === 0) {
        return 0.0;
    }
    const soma = notasTurma.reduce((acumulador, nota) => acumulador + nota, 0);
    return soma / notasTurma.length;
};

const aprovados = (notasTurma) => {
    // Retorna um NOVO array.
    return notasTurma.filter(nota => nota >= 7.0);
};

const reprovados = (notasTurma) => {
    // Retorna um NOVO array.
    return notasTurma.filter(nota => nota < 7.0);
};

const analiseAproveitamento = (notas, calculadorMedia) => {
    // 1. Chama a função que foi passada como parâmetro
    const media = calculadorMedia(notas);

    // 2. Retorna o resultado da análise
    if (media >= 7.0) {
        return "TURMA COM APROVEITAMENTO ACIMA DA MÉDIA!";
    } else {
        return "TURMA COM BAIXO APROVEITAMENTO.";
    }
};

// função impura (imprime no console)
const mostrarNotas = () => {
    // Acessa a variável global (constante) e imprime.
    // Usamos [...NOTAS_ORIGINAIS] (spread syntax) para mostrar
    // que é um array, assim como no Python (list(tupla)).
    console.log(`\nNOTAS DA TURMA : ${[...NOTAS_ORIGINAIS]}`);
};

// para rodar no compilador online, precisou-se mudar o menu interativo por um que já nos dê a análise

console.log("=".repeat(40));
console.log("   ANÁLISE DE NOTAS DA TURMA (JavaScript)");
console.log("=".repeat(40));

// --- 1. DEMONSTRAÇÃO DE TRANSPARÊNCIA REFERENCIAL ---
console.log("\n--- Demonstrando Transparência Referencial ---");
// Duas chamadas da função pura 'mediaGeral' com a *mesma entrada*
// sempre produzirão a *mesma saída*.
const media1 = mediaGeral(NOTAS_ORIGINAIS);
const media2 = mediaGeral(NOTAS_ORIGINAIS);
console.log(`Chamada 1 (mediaGeral): ${media1.toFixed(2)}`);
console.log(`Chamada 2 (mediaGeral): ${media2.toFixed(2)}`);
console.log(`As saídas são idênticas? ${media1 === media2}`);

// --- 2. DEMONSTRAÇÃO DE IMUTABILIDADE ---
console.log("\n--- Demonstrando Imutabilidade ---");
console.log("Notas Originais (Antes):", NOTAS_ORIGINAIS);

const alunosAcima = aprovados(NOTAS_ORIGINAIS);
const alunosAbaixo = reprovados(NOTAS_ORIGINAIS);

// A lista original permanece idêntica
console.log("Notas Origais (Depois):", NOTAS_ORIGINAIS);
console.log(` -> Aprovados (Novo Array): ${alunosAcima}`);
console.log(` -> Reprovados (Novo Array): ${alunosAbaixo}`);

console.log("\n--- Passando Função como Parâmetro ---");
// Estamos passando a *própria função* 'mediaGeral' como argumento.
const aproveitamento = analiseAproveitamento(NOTAS_ORIGINAIS, mediaGeral);

mostrarNotas();
console.log(`\nMÉDIA GERAL DA TURMA : ${media1.toFixed(2)}`);
console.log(`QTD. NOTAS ACIMA DA MÉDIA : ${alunosAcima.length}`);
console.log(`QTD. NOTAS ABAIXO DA MÉDIA : ${alunosAbaixo.length}`);
console.log(aproveitamento);

console.log("\n\nPROGRAMA FINALIZADO.");