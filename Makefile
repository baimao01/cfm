include config.mk

SRC = drw.c cfm.c util.c
OBJ = ${SRC:.c=.o}

all: cfm

.c.o:
	${CC} -c $<

${OBJ}: config.h config.mk

cfm: ${OBJ}
	$(CC) -o $@ ${OBJ}

clean:
	rm -f cfm ${OBJ}
