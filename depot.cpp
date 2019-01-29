#include <stdlib.h>
#include "depot.h"
#include "stack.h"

struct DepotImplementation {
    Stack stack_of_stacks;
};

Depot create_depot() {
    return 0;
}

void delete_depot(Depot depot) {

}

static void _add_to_new_stack(Depot depot, Product *product);

void push_depot(Depot depot, Product *product) {

}

static void _add_to_new_stack(Depot depot, Product *product) {

}

int get_count(Depot depot) {
    return 0;
}

Product* pop_depot(Depot depot) {
  return 0;
}
