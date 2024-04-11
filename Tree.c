#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>

struct Tree *new_tree() { return NULL; }

void insert_tree(struct Tree **root, int value) {

  if (*root) {
    if (value < (*root)->value) {
      insert_tree(&(*root)->left, value);
    } else {
      insert_tree(&(*root)->right, value);
    }
  } else {
    struct Tree *new_tree = malloc(sizeof(struct Tree));

    new_tree->value = value;
    new_tree->left = NULL;
    new_tree->right = NULL;

    *root = new_tree;
  }
}

void show_tree(struct Tree **tree) {
  if ((*tree)) {
    show_tree(&(*tree)->left);
    printf("%d\n", (*tree)->value);
    show_tree(&(*tree)->right);
  }
}

void clear_branch(struct Tree **tree) {
  if ((*tree)) {
    clear_branch(&(*tree)->left);
    clear_branch(&(*tree)->right);
    free(*tree);
  }
}

void clear_tree(struct Tree **tree) {
  if ((*tree)) {
    clear_branch(&(*tree)->left);
    clear_branch(&(*tree)->right);
    free(*tree);
  }
  (*tree) = NULL;
}
