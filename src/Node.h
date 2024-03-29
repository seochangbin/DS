#ifndef __NODE__
#define __NODE__

#include <stdlib.h>
#include <stdarg.h>

typedef struct __Node__ Node;

typedef struct __Node__ {
  Node* prev;
  void* element;
  Node* next;
} Node;

Node* create_node(void* element) {
  Node* node = (Node*) malloc(sizeof(Node));
  node->next = NULL;
  node->element = element;
  node->prev = NULL;

  return node;
}

#endif // !__NODE__
