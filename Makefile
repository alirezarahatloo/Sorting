all: GCC_COMPILE
	@.\main.exe
GCC_COMPILE:
	@gcc -o main main.c 
