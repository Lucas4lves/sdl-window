build:
	gcc -o window.exe *.c  -lSDL2
run:
	./window.exe
clean: 
	rm -rf *.exe
