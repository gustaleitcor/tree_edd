#pragma once
#include <stdlib.h>

struct Tree {
  int value;
  struct Tree *left, *right;
};

struct Tree *new_tree();

void insert_tree(struct Tree **tree, int value);

void show_tree(struct Tree **tree);

void clear_tree(struct Tree **tree);