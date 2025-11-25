#include <stdio.h>
#include "alunos.h"

int main() {
    Aluno turma[MAX_ALUNOS];
    int total = 0;
    int opcao;

    //Cleiton
    carregar_turma(turma, &total);

    // Lavignia
    do{
    printf("\n---  #####  -----   Sistema de Alunos  -----  #####   ---\n");
    printf("1 - Cadastrar novo aluno \n");
    printf("2 - Listar todos alunos \n");
    printf("3 - Salvar turma \n");
    printf("0 - Sair \n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao){

    case 1:
         cadastrar_aluno(turma, &total);
         break;

    case 2:
         listar_alunos(turma, &total);
         break;

    case 3:
        salvar_turma(turma, total);
        break;

    case 0:
       printf("Saindo do sistema...\n");
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
