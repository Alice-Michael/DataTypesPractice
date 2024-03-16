CC=g++

toy: main.o ArrayTests.o LinkedList.o
	$(CC) -o toy main.o ArrayTests.o LinkedList.o

main.o:	main.cpp ArrayTests.h types.h
ArrayTests.o: ArrayTests.cpp ArrayTests.h types.h
LinkedList.o: LinkedList.cpp LinkedList.h types.h Node.h

binaries=toy

clean:
	rm $(binaries) *.o *~
