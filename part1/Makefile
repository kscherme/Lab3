all:    main

main: main.o BankAccount.o Checking.o Credit.o
	g++ -o main main.o BankAccount.o Checking.o Credit.o

main.o: main.cpp
	g++ -c main.cpp

BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp

Checking.o: Checking.cpp
	g++ -c Checking.cpp

Credit.o: Credit.cpp
	g++ -c Credit.cpp

clean:
	rm -f *.o main
