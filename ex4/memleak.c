// make && valgrind --leak-check --suppressions=objc.supp ./memleak
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char *str = malloc(sizeof(char) * 5);  // valgrind will show main (memleak.c:5)
    sprintf(str, "test");
    printf("Output: %s\n", str);
    return 0;
}
