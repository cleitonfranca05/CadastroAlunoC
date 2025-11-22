#include <stdio.h>
#include "alunos.h"

// Nayara
void cadastrar_aluno(Aluno turma[], int *total) {

}

// Luiza
void listar_alunos(Aluno turma[], int total) {


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
