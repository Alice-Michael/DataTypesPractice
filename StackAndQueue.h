#include "types.h"
#include "Node.h"

#ifndef STACKANDQUEUE_H
#define STACKANDQUEUE_H

class Stack {
 public:
  Stack();

  void display();

 private:
  Node * top;
};

class Queue {
 public:
  Queue();

  void display();
 private:
  Node * head;
  Node * tail;
};

#endif // STACKANDQUEUE_H
