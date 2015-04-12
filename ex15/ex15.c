#include <stdio.h>

int main(int argc, char *argvp[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
    printf("---\n");

    // using pointers
    int *cur_age = ages;
    char **cur_name = names;
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", *(cur_name+i), *(cur_age+i));
    }
    printf("---\n");


    return 0;
}
