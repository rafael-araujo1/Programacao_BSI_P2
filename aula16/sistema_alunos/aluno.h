#ifndef ALUNO_H
#define ALUNO_H



typedef enum { APROVADO, PROVA_FINAL, REPROVADO } Situacao;


typedef struct {
  char nome[100];
  char matricula[20];
  int qntd_notas;
  int notas[qntd_notas] = {0};
  Situacao situacao = 0;
} Aluno;


Aluno cadastrar_aluno(char nome[100], char matricula[20], int notas[qntd_notas]);
int verificar_situacao(float media);


#endif
