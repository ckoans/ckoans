#include <stdio.h>

/* This is the working program compared to the deliberately erroneous ex4.c
we can generate our suppression configuration file using this correct program using
valgrind --leak-check=yes --gen-suppressions=yes ./test */

int main()
{
    int age = 10;
    int height = 72;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;
}
