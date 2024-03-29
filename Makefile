CC=g++

toy: main.o ArrayTests.o LinkedList.o StackAndQueue.o TreeAndGraph.o
	$(CC) -o toy main.o ArrayTests.o LinkedList.o StackAndQueue.o TreeAndGraph.o

main.o:	main.cpp ArrayTests.h LinkedList.h StackAndQueue.o types.h
ArrayTests.o: ArrayTests.cpp ArrayTests.h types.h
LinkedList.o: LinkedList.cpp LinkedList.h types.h Node.h
StackAndQueue.o: StackAndQueue.cpp StackAndQueue.h types.h Node.h
TreeAndGraph.o: TreeAndGraph.cpp TreeAndGraph.h types.h Node.h

binaries=toy

clean:
	rm $(binaries) *.o *~
