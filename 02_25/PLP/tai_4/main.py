def filtrar_pares(lista):
    # condição base
    if not lista:
        return []

    if lista[0] % 2 == 0: # mantém se for par
        return [lista[0]] + filtrar_pares(lista[1:]) # recursão para passar pelos outros
    
    return filtrar_pares(lista[1:]) # senão apenas ignora

def filtrar_impares(lista):
    # condição base
    if not lista:
        return []
    
    if lista[0] % 2 != 0: # mantém se for ímpar
        return [lista[0]] + filtrar_impares(lista[1:])
    
    return filtrar_impares(lista[1:]) # senão apenas ignora

# ---- TRANSPARÊNCIA REFERENCIAL ----
print(filtrar_pares([1, 2, 3, 4, 5, 6]))  
print(filtrar_pares([1, 2, 3, 4, 5, 6]))  

print(filtrar_impares([1, 2, 3, 4, 5, 6]))  
print(filtrar_impares([1, 2, 3, 4, 5, 6]))  