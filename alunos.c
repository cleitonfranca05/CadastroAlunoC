#include <stdio.h>
#include "alunos.h"

// Nayara
void cadastrar_aluno(Aluno turma[], int *total) {

     if (*total >= MAX_ALUNOS) {
        printf("Limite de alunos atingido!\n");
        return;
    }

     getchar();
     printf("\n--Cadastro de Aluno--");
     printf("\nDigite o nome do aluno(a):");
     scanf("%49[^\n]", turma[*total].nome);
     printf("Digite o RA:");
     scanf("%d", &turma[*total].ra);
     printf("Digite a 1 nota:");
     scanf("%f", &turma[*total].nota1);
     printf("Digite a 2 nota:");
     scanf("%f", &turma[*total].nota2);

     (*total)++;

}

// Luiza
void listar_alunos(Aluno turma[], int total) {
     if(total == 0){
        printf("\nA turma está vazia. Nao ha alunos para listar\n");
        return;
    }
    for(int i = 0; i < MAX_ALUNOS; i++){
        printf("\n--- LISTA DO ALUNO: %d  ---\n", i + 1);
        printf("\nNome: %s", turma[i].nome);
        printf("\nRA: %d", turma[i].ra);
        printf("\nNota 1: %.1f", turma[i].nota1);
        printf("\nNota 2: %.1f", turma[i].nota2);
        printf("\n");
    }
    return;
}

// Cleiton
void salvar_turma(Aluno turma[], int total) {
    FILE *arq = fopen("turma.txt", "w");

    if (arq == NULL) {
        printf("Erro ao salvar arquivo!\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        fprintf(arq, "%s %d %.2f %.2f\n",
                turma[i].nome,
                turma[i].ra,
                turma[i].nota1,
                turma[i].nota2);
    }

    fclose(arq);

    printf("Dados salvos em turma.txt!\n");
}

// Cleiton
void carregar_turma(Aluno turma[], int *total) {
    FILE *arq = fopen("turma.txt", "r");

    if (arq == NULL) {
        printf("Nenhum arquivo encontrado, iniciando vazio.\n");
        return;
    }

    *total = 0;

    while (!feof(arq) && *total < MAX_ALUNOS) {
        fscanf(arq, " %49s %d %f %f",
               turma[*total].nome,
               &turma[*total].ra,
               &turma[*total].nota1,
               &turma[*total].nota2);

        (*total)++;
    }

    fclose(arq);

    printf("Dados carregados com sucesso!\n");
}
