# Trabalho Avaliativo Individual 3 - TAI-3
# Aluno : Nathã de Melo Santos
# Matrícula : 1250109474
# Paradigmas de Linguagem de Programação

from functools import reduce # importação reduce
import os # biblioteca que permite limpar terminal windows
import time # biblioteca para controle do tempo

# tupla com as notas já definidas = imutabilidade
notas_originais = (6.5, 10.0, 8.0, 9.4, 4.5, 3.7, 7.5, 7.0)

# função de ordem superior e pura 
# uso do reduce para aplicar uma soma geral na tupla
def media_geral(notas_turma):
    soma =  reduce(lambda x,y: x + y, notas_turma)
    media = soma / len(notas_turma)
    return media

# função que recebe outra função como parâmetro
def aproveitamento_turma(func):
    if func >= 7.0:
        return "TURMA COM APROVEITAMENTO ACIMA DA MÉDIA!"
    else:
        return "TURMA COM BAIXO APROVEITAMENTO."

# funções de ordem superior, pura e criação de uma lista em cima da tupla
# uso do filter para selecionar somente as notas que atendem às condiçoes
def aprovados(notas_turma):
    aprovacoes = list(filter(lambda x: x >= 7.0, notas_turma))
    return aprovacoes

def reprovados(notas_turma):
    reprovacoes = list(filter(lambda x: x < 7.0, notas_turma))
    return reprovacoes

# função impura (uso de variável global)
def mostrar_notas():
    print(f"\nNOTAS DA TURMA : {list(notas_originais)}")

# função que exibe o menu
def exibirmenu():
    time.sleep(3.0) # controle de 3seg do tempo para aparecer
    os.system("cls") # limpa console

    print("=" * 22)
    print("   NOTAS DA TURMA :")
    print("=" * 22)
    print("""\n
O QUE DESEJA FAZER :
1) MOSTRAR NOTAS
2) EXIBIR APROVAÇÕES E REPROVAÇÕES
3) MOSTAR ANÁLISE GERAL DA TURMA
4) SAIR\n""")

# transparência referencial
print("---- TRANSPARÊNCIA REFERENCIAL -----")
media1 = media_geral(notas_originais)
media2 = media_geral(notas_originais)
print(f"""
CHAMADA 1 DA MÉDIA : {media1}
CHAMADA 2 DA MÉDIA : {media2}
AS SAÍDAS SÃO IDÊNTICAS ? {media1 == media2}""")

time.sleep(2.0)

# loop principal
while True:
    exibirmenu()
    opcao = int(input("\n\nSELECIONE SUA OPÇÃO (1-4): ")) # entrada da opção selecionada

    if opcao < 1 or opcao > 4: # caso não esteja entre as opções
        print("\nSELECIONE UMA OPÇÃO VÁLIDA!")

    else:
        if opcao == 1:
            mostrar_notas() # mostra a tupla original (transformada em lista)
        
        elif opcao == 2:
            # mostra transfomração sem mutação
            mostrar_notas()
            alunos_acima = aprovados(notas_originais)
            alunos_abaixo = reprovados(notas_originais)
            print(f"""
NOTAS ACIMA DA MÉDIA : {alunos_acima}
NOTAS ABAIXO DA MÉDIA : {alunos_abaixo}
""")
            
        elif opcao == 3:
            media_turma = media_geral(notas_originais)
            aproveitamento = aproveitamento_turma(media_geral(notas_originais))
            # mostra novamente que não houve modificações
            mostrar_notas()
            print(f"""
MÉDIA GERAL DA TURMA : {media_turma}
QTD. NOTAS ACIMA DA MÉDIA : {len(aprovados(notas_originais))}
QTD. NOTAS ABAIXO DA MÉDIA : {len(reprovados(notas_originais))}
{aproveitamento}""")
            time.sleep(2.0) # 2 seg para sair da condição
        
        else:
            break # quebra loop caso a opção seja 4

print("\n\nPROGRAMA FINALIZADO.")