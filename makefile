C =gcc
AR = ar
FLAGS = -Wall -g

all: connections staticL 

staticL: my_matLib.a

my_matLib.a: my_mat.o
	$(AR) -rcs my_matLib.a my_mat.o 
	
connections: my_mat.o main.o
	$(C) $(FLAGS) my_mat.o main.o -o connections

my_mat.o: my_mat.c my_mat.h
	$(C) $(FLAGS) my_mat.c my_mat.h -c

main.o: main.c my_mat.h
	$(C) $(FLAGS) main.c my_mat.h -c

clean:
	rm -rf *.o *.a connections
.phony: clean,all 