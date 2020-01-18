/*
 * exercise2.c
 *
 *  Created on: Jan. 17, 2020
 *      Author: chris
 */

#include <stdio.h>
#include <stdint.h>
#include <include/exercise2.h>

int runExercise2() {
    uint32_t f1 = 1;
    uint32_t f2 = 2;
    uint64_t sum = 0;
    while (f2 <= 4000000) {
        if (!(f2 & 1)) {
            printf("Adding %d to the sum\n", f2);
            sum += f2;
        }

        uint32_t f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    printf("The sum of all the even fibonacci sequence numbers is: %ld\n", sum);
    return 0;
}
