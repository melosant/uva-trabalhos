function filtrar_pares(lista) {
    // Condição base: lista vazia
    if (lista.length === 0) {
        return [];
    }
    
    // Desestrutura o array: 'primeiro' é lista[0], 'resto' é lista[1:]
    const [primeiro, ...resto] = lista;

    if (primeiro % 2 === 0) { // mantém se for par
        // Retorna um novo array: [primeiro] + resultado da recursão
        return [primeiro].concat(filtrar_pares(resto));
    }
    
    // senão apenas ignora e continua a recursão
    return filtrar_pares(resto); 
}

function filtrar_impares(lista) {
    // Condição base: lista vazia
    if (lista.length === 0) {
        return [];
    }
    
    const [primeiro, ...resto] = lista;
    
    if (primeiro % 2 !== 0) { // mantém se for ímpar
        // Retorna um novo array: [primeiro] + resultado da recursão
        return [primeiro].concat(filtrar_impares(resto));
    }
    
    // senão apenas ignora e continua a recursão
    return filtrar_impares(resto); // senão apenas ignora
}

// ---- TRANSPARÊNCIA REFERENCIAL ----
const lista_teste = [1, 2, 3, 4, 5, 6];

console.log(filtrar_pares(lista_teste));
console.log(filtrar_pares(lista_teste));

console.log(filtrar_impares(lista_teste));
console.log(filtrar_impares(lista_teste));