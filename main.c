#include <stdio.h>
#include "alunos.h"

int main() {
    Aluno turma[MAX_ALUNOS];
    int total = 0;
    int opcao;

    //Cleiton
    carregar_turma(turma, &total);

    // Lavignia
    printf("\n---  #####  -----   Sistema de Alunos  -----  #####   ---\n");
    printf("1 - Cadastrar novo aluno \n");
    printf("2 - Listar todos alunos \n");
    printf("3 - Salvar turma \n");
    printf("0 - Sair \n");
    printf("Opcao: ");
    scanf("%d", &opcao);



    return 0;
}
