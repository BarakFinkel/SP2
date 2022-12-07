# Macros ------------------------------------------------

CC=gcc # for c
AR=ar # for static libraries 
MAIN=main.o
MYMAT=my_mat.o
FLAGS=-Wall

# Targets -----------------------------------------------

all: connections

connections: $(MAIN) my_mat.a # the main file. using the static liabrary
	$(CC) $(FLAGS) -o mains $(MAIN) -lm

my_mat.a: $(MYMAT) # makes the static liabrary from the object file
	$(AR) -rcs my_mat.a $(MYMAT)

$(MAIN): main.c my_mat.h # the main object file
	$(CC) $(FLAGS) -fPIC -c main.c -lm

$(MYMAT): my_mat.c my_mat.h # makes the object file from the source file
	$(CC) $(FLAGS) -fPIC -c my_mat.c my_mat.h -lm

.PHONY: clean all

clean:
	rm -f *.a *.o mains