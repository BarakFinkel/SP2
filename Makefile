# Macros ------------------------------------------------

CC=gcc # for c
AR=ar # for static libraries 
MAIN=main.o
MYMAT=my_mat.o
FLAGS=-Wall

# Rules -------------------------------------------------

all: connections

# Targets -----------------------------------------------

connections: $(MAIN) my_mat.a # the main file. using the static liabrary
	$(CC) $(FLAGS) -o mains $(MAIN) libclassrec.a -lm

my_mat.a: $(MYMAT) # makes the static liabrary for recursion
	$(AR) -rcs my_mat.a $(MYMAT)

$(MAIN): main.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c main.c -lm

$(MYMAT): my_mat.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_mat.c -lm

.PHONY: clean all

clean:
	rm -f *.a *.o connections