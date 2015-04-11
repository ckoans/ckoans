#include <stdio.h>

int main(int argc, char *argv[]) {
  int distance = 100;
  printf("You are %d miles away.\n", distance);
  return 0;
}

/* Notes
 * include imports headers of external files into this source file so we can use functions in those external files
 *
 * for c's main function to be complete, our main function need to return an integer and should accept an int of argument counts and an array of char * strings for the arguments
 */
