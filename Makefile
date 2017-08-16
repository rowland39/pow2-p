all : pow2-p

pow2-p : pow2-p.o
	${CC} ${CFLAGS} -o $@ $?

clean :
	rm -f *.o *~ pow2-p
