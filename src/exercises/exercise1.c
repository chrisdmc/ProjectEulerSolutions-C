/*
 * exercise1.c
 *
 *  Created on: Jan. 17, 2020
 *      Author: chris
 */

#include <stdio.h>
#include <include/exercise1.h>

int runExercise1() {
    long sum = 0;

    for (int i = 3; i < 1000; i += 3) {
        sum += i;
    }

    for (int i = 5; i < 1000; i += 5) {
        if (i % 3 != 0) {
            sum += i;
        }
    }

    printf("The sum of all the multiples of 3 or 5 less than 1000 is: %ld\n", sum);
    return 0;
}
