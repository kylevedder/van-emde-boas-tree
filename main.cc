#include "veb.h"
#include "veb_queue.h"

using veb_queue::vEB;
using veb_queue::vEB_tree_delete;
using veb_queue::vEB_tree_elements;
using veb_queue::vEB_tree_insert;
using veb_queue::vEB_tree_shutdown;

using veb_queue::VebQueue;

int main() {
  int u = 4;
  vEB *V = NULL;

  V = vEB_tree_insert(V, 3, 3, u);
  V = vEB_tree_insert(V, 1, 3, u);
  V = vEB_tree_insert(V, 2, 3, u);

  printf("there are %d elements 0\n", vEB_tree_elements(V, 0));
  printf("there are %d elements 1\n", vEB_tree_elements(V, 1));
  printf("there are %d elements 2\n", vEB_tree_elements(V, 2));
  printf("there are %d elements 3\n\n", vEB_tree_elements(V, 3));
  printf("minimum: %d \n\n", vEB_tree_Minimum(V));

  V = vEB_tree_delete(V, 3, u);
  V = vEB_tree_delete(V, 1, u);
  V = vEB_tree_delete(V, 2, u);

  printf("there are %d elements 0\n", vEB_tree_elements(V, 0));
  printf("there are %d elements 1\n", vEB_tree_elements(V, 1));
  printf("there are %d elements 2\n", vEB_tree_elements(V, 2));
  printf("there are %d elements 3\n\n", vEB_tree_elements(V, 3));

  vEB_tree_shutdown(V, u);
  V = nullptr;

  VebQueue v_queue(u);

  return 0;
}
