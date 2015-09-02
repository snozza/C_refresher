#g is for debugging
CFLAGS=-Wall -g

# for all targets you want
all: ex19

# ex19 depends on object.o
ex19: object.o

clean:
	rm -f ex19 
