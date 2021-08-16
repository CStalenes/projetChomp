Chomp: Main.o Tablette.o Position.o Coup.o 
	gcc -o Chomp Main.o Tablette.o Position.o Coup.o -Wall -ansi -pedantic -lMLV

Main.o: Main.c Coup.h Position.h Tablette.h
	gcc -c Main.c -Wall -ansi -pedantic -lMLV

Tablette.o: Tablette.c Tablette.h
	gcc -c Tablette.c -Wall -ansi -pedantic -lMLV

Position.o: Position.c Position.h Tablette.h 
	gcc -c Position.c -Wall -ansi -pedantic -lMLV

Coup.o: Coup.c Coup.h Position.h Tablette.h 
	gcc -c Coup.c -Wall -ansi -pedantic -lMLV



