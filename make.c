ABC.exe:main.o palindrome.o reverse.o 
	gcc -o ABC.exe main.o palindrome.o reverse.o  
main.o:main.c
	gcc -c main.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
reverse.o:reverse.c
	gcc -c reverse.c 

	
