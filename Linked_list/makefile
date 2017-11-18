OFILES = LinkedList.o main.o Node.o
CC_O = g++ -c
CC = g++

main.out: $(OFILES)
	$(CC) $(OFILES) -o main.out

LinkedList.o: LinkedList.cpp LinkedList.h Node.h
	$(CC_O) LinkedList.cpp

main.o: main.cpp LinkedList.h Node.h
	$(CC_O) main.cpp

Node.o: Node.cpp Node.h
	$(CC_O) Node.cpp

run: main.out
	./main.out

clean:
	rm *.o main.out
