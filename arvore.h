#ifndef TREE_H
#define TREE_H

typedef struct no {
  int info;
  struct no* esq;
  struct no* dir;
} No;


void loadTreeFromFile();
void showTree();
void isFull();
void searchValue();
void removeValue();
void printInOrder();
void printPreOrder();
void printPostOrder();
void balanceTree();

int getHeight();
