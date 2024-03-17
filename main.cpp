#include "types.h"
#include "ArrayTests.h"
#include "LinkedList.h"
#include "StackAndQueue.h"

void menu();
int again();

int main()
{
  ArrayTests arr;
  LinkedList ll;
  Stack stack;
  Queue q;
  int choice = 1;
  char input;

  menu();

  while (choice != 0){
    std::cin >> input;

    switch (input) {
    case 'q':
      choice = 0;
      break;
    case '1':
      arr.display();
      choice = again();
      break;
    case '2':
      ll.display();
      choice = again();
      break;
    case '3':
      stack.display();
      q.display();
      choice = again();
      break;
    case '4':
      std::cout << "Not Supported yet. Please choose again: ";
      break;
    default:
      std::cout << "Not valid.\n"
		<< "What would you like to do? ";
    }
  }

  std:: cout << "Exiting.\nThank you\n\n";
  return 0;
}

void menu()
{
  std::cout << "q -- quit\n";
  std::cout << "1 -- arrays\n";
  std::cout << "2 -- Linked Lists\n";
  std::cout << "3 -- Stacks and Queues (Not supported yet)\n";
  std::cout << "4 -- Trees and Graphs (Not supported yet)\n";
}

int again()
{
  char input;

  std::cout << "Do you want to run another test? (Y/N): ";
  std::cin >> input;

  if (input == 'Y' || input == 'y') {
    menu();
    return 1;
  }
  else
    return 0;
}
