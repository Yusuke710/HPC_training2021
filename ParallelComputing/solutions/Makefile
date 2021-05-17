
CC := gcc
ACCFLAGS := -fopenmp

laplace_parallel: jacobi.c laplace2d.c
	${CC} ${ACCFLAGS} -o laplace jacobi.c laplace2d.c -lm

clean:
	rm laplace