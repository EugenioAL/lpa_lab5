lab5:	main.o combinaChar.o 
	gcc main.c combinaChar.c -o lab5

main.o:	main.c
	gcc -c main.c

combinaChar.o: combinaChar.c myLib.h
	gcc -c combinaChar.c

run:
	.\lab5 3 "abc"

clear:
	rm -rf *.exe
	rm -rf *.o