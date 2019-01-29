#include <stdlib.h>
#include "stack.h"

typedef struct NodeImplementation* Node;

struct NodeImplementation {
    Node next;
    void* data;
};

struct StackImplementation {
    Node head;
    int count;
};

Stack create_stack() {
  Stack stack = (Stack)smalloc(sizeof(StackImplementation));
  stack->head=0;
  stack->count=0;
  return stack;
}

void delete_stack(Stack stack) {
  Node current=stack->head;
  Node tmp;
  while (current!=0) {
    tmp=current;
    current=current->next;
    sfree(tmp);
  }
  sfree(stack);

}

void push_stack(Stack stack, void *data) {
  Node new_node=(Node)smalloc(sizeof(NodeImplementation));
  new_node->data=data;
  new_node->next=stack->head;
  stack->head=new_node;
  stack->count++;

}

int get_count(Stack stack) {
    return stack->count;
}

void* pop_stack(Stack stack) {
  //if (get_count(stack)==0) {
    //return 0;
  //}
  
}

void* peek_stack(Stack stack) {

}
