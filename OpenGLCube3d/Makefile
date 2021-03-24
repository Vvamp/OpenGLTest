LIBS=-lglut -lGL 
cflags = -Wall
CPP=/usr/bin/g++ 
C=/usr/bin/gcc 

main: main.o
	$(info Linking object files)
	@$(CPP) -g -o main main.o $(LIBS) $(cflags)

main.o: main.cpp
	$(info Building .o file main.o)
	@$(CPP) -g -c main.cpp 

.PHONY: clean all run

clean: 
	$(info Cleaning)
	@rm *.o main 


all: clean main

run: all 
	$(info Running...)
	./main
