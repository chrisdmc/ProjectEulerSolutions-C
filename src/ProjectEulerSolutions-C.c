// Simple Hello World program
#include <stdio.h>
#include <stdlib.h>
#include <include/exercises.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Incorrect number of args: %d", argc);
        return 1;
    }

	int exercise = atoi(argv[1]);
	printf("Running exercise %d\n------------------\n", exercise);

	int retval;
	switch(exercise) {
	case 1:
	    retval = runExercise1();
	    break;
	case 2:
	    retval = runExercise2();
	}

	if (retval) {
	    printf("Ruh-roh!");
	}
	return retval;
}
