# Trabalho Avaliativo Individual 2 
# Aluno : Nathã Melo
# Relatório de Salários - Python

# importação de bibliotecas
import os # Importa função para limpar terminal
import time # Importa funções de tempo

# declaração de variável global
salario_min = 1518.00

# ------------------------- Funções --------------------------

def lersalarios(num_funcionarios): # Função para ler salários (recebe 'num_funcionarios' como parâmetro)
    salarios_temp = [] # Cria uma lista local (variável local)

    for i in range(num_funcionarios): 
        salario_atual = float(input(f"Informe o salário do {i + 1}° funcionário : R$")) 
        salarios_temp.append(salario_atual) 
    
    return salarios_temp # Retorna a lista preenchida à lista na função principal

def exibirmenu(): # Procedimento para exibir o menu
    time.sleep(3.0) 
    os.system("cls") 

    print("""
===================
    MENU EMPRESA:
===================
O que deseja fazer ?
1. RELÁTORIO
2. APLICAR REAJUSTES
3. TOTAL DA FOLHA
4. SAIR""") 

def exibir_relatorio(lista_salarios): # Procedimento para exibir o relatório (recebe 'lista_salarios' como parâmetro)
    salarios_acima = 0 # Variável local da função
    for s in lista_salarios: 
            if s > salario_min: 
                salarios_acima += 1 
    print(f"""
\nSÁLARIOS : {lista_salarios}
SÁLARIOS ACIMA DO MÍNIMO : {salarios_acima}""") 
    
def reajuste(lista_salarios): # Procedimento para aplicar o reajuste
    for i in range(len(lista_salarios)): 
            lista_salarios[i] *= 1.10 
    print(f"""
    \nAJUSTE DE 10% APLICADOS NOS SALÁRIOS.
    SALÁRIOS ATUAIS : {lista_salarios}""") 

def soma_folha(lista_salarios): # Função que retorna a soma da folha
    total = sum(lista_salarios) # 'sum()' soma todos os elementos da lista
    return total # Retorna o valor calculado à variável na função principal

def main(): # Função principal que "orquestra" o programa
    funcionarios = int(input("Digite a quantidade de funcionários : ")) 
    salarios = lersalarios(funcionarios) # Chama a função de leitura e armazena na lista 'salarios' (vetor)

    while True: # Loop principal do menu
        exibirmenu() # Chama o procedimento que mostra o menu

        opcao = input("Qual opção você escolhe ? ") # Lê a opção do usuário
        if int(opcao) == 1: # Se escolher 1
            exibir_relatorio(salarios) # Chama o procedimento de relatório
        
        elif int(opcao) == 2: # Se escolher 2
            reajuste(salarios) # Chama o procedimento de reajuste
            
        elif int(opcao) == 3: # Se escolher 3
            folha = soma_folha(salarios) # Chama a função de soma e guarda o retorno
            print(f"\nVALOR TOTAL DA FOLHA : R${folha}") # Imprime o valor

        elif int(opcao) == 4: # Se escolher 4
            break # Quebra o loop 'while True' e encerra o menu

        else: # Se digitar qualquer outra coisa
            print("\nDIGITE UMA OPÇÃO VÁLIDA!") # Exibe mensagem de erro
    
# ------------------ Aqui é onde o comando realmente roda -----------------------

if __name__ == "__main__": # Condição padrão para iniciar um script Python
     main() # Executa a função principal 

print("Programa Finalizado!") # fim do programa