#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "arvore.h"

//---------------------------------------------------------------
//DECLARAÇÃO DE FUNÇÕES

//---------------------------------------------------------------
No *loadTreeFromFile(char arquivo[]){
  FILE *arq;
  int info;
  No *aux;
  No *raiz = NULL;
  if(arq = fopen(arquivo,"a+"),arq == NULL){
    printf("erro ao abrir o arquivo!\n");
    exit(1);
  }
  if (!feof(arq)){

    fscanf(arq," %d ",&value);
  }

  if (!feof(arq)){
    if(raiz = (No*)malloc(sizeof(No)),raiz == NULL)
    {
      printf("alocação falhou!\n");
    }
    raiz->value = value;
    raiz->esq = NULL;
    raiz->dir = NULL;
  }

  while(!feof(arq)){
    fscanf(arq," %d ",&value);
    if(aux = (No*)malloc(sizeof(No)),aux == NULL){
      printf("alocação falhou!\n");
    }
    aux->value = value;
    aux->dir = NULL;
    aux->esq = NULL;
    insereNo(raiz,aux);
  }
  fclose(arq);
  return raiz;
}
//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
//---------------------------------------------------------------
