/*
Trabalho Avaliativo Individual 2 
Aluno : Nathã Melo
Relatório de Salários - C
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const double salario_min = 1518.00;

void lersalarios(double salarios[], int num_funcionarios);
void exibirmenu();
void exibir_relatorio(double lista_salarios[], int num_funcionarios);
void reajuste(double lista_salarios[], int num_funcionarios);
double somafolha(double lista_salarios[], int num_funcionarios);

/*----------------- PROCEDIMENTOS E FUNÇÕES --------------------*/

int main(){
    int funcionarios, opcao;
    
    system("cls");

    printf("Digite o numero de funcionarios : ");
    scanf("%d", &funcionarios); // CORREÇÃO 1: Era "$d"

    double salarios[funcionarios];

    lersalarios(salarios, funcionarios);

    while (1) {
        exibirmenu();
        printf("\nQual opcao voce escolhe : ");
        scanf("%d", &opcao); // CORREÇÃO 2: Faltava o '&'

        if (opcao == 1){
            exibir_relatorio(salarios, funcionarios);
        }

        else if (opcao == 2){
            reajuste(salarios, funcionarios);
        }

        else if (opcao == 3){
            double folha = somafolha(salarios, funcionarios);
            printf("\nVALOR TOTAL DA FOLHA : R$%.2f\n", folha);
        }
        
        else if (opcao == 4){
            break;
        }

        else {
            printf("\nDIGITE UMA OPCAO VALIDA!");
        }
    }

    printf("\nPrograma Finalizado!");
    return 0;
}

void lersalarios(double salarios[], int num_funcionarios){
    for(int i = 0; i < num_funcionarios; i++){
        printf("\nInforme o salario do %d. funcionario : R$", i + 1);
        scanf("%lf", &salarios[i]);
    }
}

void exibirmenu(){
    Sleep(3000);
    system("cls");

    printf("===================\n");
    printf("     MENU EMPRESA:\n");
    printf("===================\n");
    printf("O que deseja fazer ?\n");
    printf("1. RELATORIO\n");
    printf("2. APLICAR REAJUSTES\n");
    printf("3. TOTAL DA FOLHA\n");
    printf("4. SAIR\n");
}

void exibir_relatorio(double lista_salarios[], int num_funcionarios){
    int salarios_acima = 0;
    printf("\nSALARIOS : ");
    for(int i = 0; i < num_funcionarios; i++){
        printf("R$%.2f  /  ", lista_salarios[i]); // CORREÇÃO 3: Era "%2.f" e faltava espaço
        
        if(lista_salarios[i] > salario_min){
            salarios_acima++;
        }
    }
    printf("\nSALARIOS ACIMA DO MINIMO : %d\n", salarios_acima);
}

void reajuste(double lista_salarios[], int num_funcionarios){
    for(int i = 0; i < num_funcionarios; i++){
        lista_salarios[i] *= 1.10;
    }

    printf("\nAJUSTE DE 10 PORCENTO APLICADOS NOS SALARIOS.\n"); // Adicionei um \n no início
    printf("\nSALARIOS ATUAIS : ");
    
    for(int i = 0; i < num_funcionarios; i++){
        printf("R$%.2f  /  ", lista_salarios[i]); // CORREÇÃO 4: Faltava espaço
    }

    printf("\n");
}

double somafolha(double lista_salarios[], int num_funcionarios){
    double total = 0.0;

    for(int i = 0; i < num_funcionarios; i++){
        total += lista_salarios[i];
    }

    return total;
}