CC=g++ 
CFLAGS=-Wall -Wextra 
EXEC=./tp1
TMPOUT=tp1.testresult

$(EXEC): main.cc Preparacao.o Mecanica.o Batalha.o
	$(CC) $(CFLAGS) main.cc Preparacao.o Mecanica.o Batalha.o -o $(EXEC)

Preparacao.o: headers/Preparacao.cpp
	$(CC) $(CFLAGS) -c headers/Preparacao.cpp -o Preparacao.o

Mecanica.o: headers/Mecanica.cpp
	$(CC) $(CFLAGS) -c headers/Mecanica.cpp -o Mecanica.o

Batalha.o: headers/Batalha.cpp
	$(CC) $(CFLAGS) -c headers/Batalha.cpp -o Batalha.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf Preparacao.o Mecanica.o Batalha.o