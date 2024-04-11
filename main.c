#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  struct Tree *tree = new_tree();

  insert_tree(&tree, 10);
  insert_tree(&tree, 15);
  insert_tree(&tree, 5);
  insert_tree(&tree, 4);

  show_tree(&tree);

  clear_tree(&tree);

  printf("%p\n", tree);

  return 0;
}