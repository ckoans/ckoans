#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = { 'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0' };

    printf("The size of an int: %ld\n", sizeof(int));   // 4 bytes
    printf("The size of areas (int[]): %ld\n", sizeof(areas));  // 4 bytes * 5
    printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));  // 5
    printf("The first area is %d, the 2nd is %d.\n", areas[0], areas[1]); // 10 and 12

    printf("The size of a char: %ld\n", sizeof(char));  // 1 byte
    printf("The size of name (char[]): %ld\n", sizeof(name));  // length of string + 1 = 4
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));  // 4

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));  // 12
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));  // 12 / 1 = 12
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
