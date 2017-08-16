#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
 * This program demonstrates how to easily calculate if a value is a power of
 * 2. A power of 2 has one bit on. If you subtract 1 from the number, that
 * bit should be off and all previous bits will be on. This only happens if
 * the number is a power of 2. If you bitwise and (&) the number and the number
 * minus one, it should be 0 if the original number is a power of 2 - otherwise
 * that won't be the case.
 */
int
power_of_2(uint32_t number)
{
    /* Not the precedence order here. */
    return number > 0 && (number & number - 1) == 0;
}

int
main(int argc, char **argv)
{
    uint32_t number;

    if (argc < 2) {
        fprintf(stderr, "usage: %s <number>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    number = atol(argv[1]);

    if (power_of_2(number)) {
        printf("Yes, %u is a power of 2.\n", number);
    } else {
        printf("No, %u is not a power of 2.\n", number);
    }

    exit(EXIT_SUCCESS);
}
