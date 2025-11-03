#include <stdio.h> // Biblioteca padrão
#include <stdlib.h> 

int main(void) // Funçãoo Principal 
{
	// Declaração de Variáveis
    int qtdalunos, i;
    float n1, n2, n3, media;
    char nome[20];
    char repetir;
	
	// Loop Principal (faça...enquanto)
    do 
    {
        system("cls"); // Limpa a tela (comando do Windows)
        printf("Quantos alunos deseja registrar? ");
        scanf("%d", &qtdalunos);

		// Loop para registro de alunos
        for (i = 1; i <= qtdalunos; i++) {
            printf("\n---- Aluno %d ----\n", i);
            printf("Nome : ");
            scanf("%s", nome);

            printf("Digite as 3 notas desse aluno : \n");
            scanf("%f %f %f", &n1, &n2, &n3);

            media = (n1 + n2 + n3) / 3.0;

            printf("\nMedia do aluno %s : %.1f\n", nome, media);

			// Verificação da Situação do Aluno (estruturas condicionais)
            if (media >= 7.0){
                printf("\nO aluno %s foi APROVADO!\n", nome);

            } else if (media >= 5.0 && media < 7.0){
                printf("O aluno %s ficou de RECUPERACAO!\n", nome);
            
            } else {
                printf("O aluno %s foi REPROVADO!\n", nome);
            }
        }

		// Controle para repetição
        printf("\nDeseja calcular outra turma ? (S/N) ");
        scanf(" %c", &repetir);
        
    } while (repetir == 's' || repetir == 'S'); // Verificação para repetição

    printf("Programa Finalizado!");
    return 0;
}
