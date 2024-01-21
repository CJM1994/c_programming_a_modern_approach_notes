#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j, k;
  i = j = k = 0;

  // NOTE: These are equivalent
  i = i + 1;
  i += 1;
  i++;

  // NOTE: Prefix vs Postfix Operators
  // Adding the ++ or -- BEFORE will increment/decrement the value of the
  // operand BEFORE it is evaluated
  // Adding the ++ or -- AFTER will increment/decrement the value of the
  // operand AFTER it is evaluated
  i = 1;
  printf("i is %d\n", ++i); // prints i is 2
  printf("i is %d\n", i);   // prints i is 2
  i = 1;
  printf("i is %d\n", i++); // prints i is 1
  printf("i is %d\n", i);   // prints i is 2

  return EXIT_SUCCESS;
}
