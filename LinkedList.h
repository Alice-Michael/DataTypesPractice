#include "types.h"
#include "Node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
 public:
  LinkedList();

  void display();
 private:
  Node * head;
};
#endif // LINKEDLIST_H
