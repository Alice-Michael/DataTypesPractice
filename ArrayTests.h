#include "types.h"

#ifndef ARRAYTESTS_H
#define ARRAYTESTS_H

class ArrayTests {
 public:
  ArrayTests();

  void display();
  
 private:
#define SIZE 10
  int empty[0];
  int list1[SIZE];
};

#endif // ARRAYTESTS_H
