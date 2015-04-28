#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void die(const car *message)
{
    if (errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1)
}

typedef int (*compare_cb)(int a, int b);
