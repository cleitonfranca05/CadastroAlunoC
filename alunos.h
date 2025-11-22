#ifndef ALUNOS_H
#define ALUNOS_H

#define MAX_ALUNOS 50

typedef struct {
    char nome[50];
    int ra;
    float nota1;
    float nota2;
} Aluno;

void cadastrar_aluno(Aluno turma[], int *total);
void listar_alunos(Aluno turma[], int total);
void salvar_turma(Aluno turma[], int total);
void carregar_turma(Aluno turma[], int *total);

#endif
