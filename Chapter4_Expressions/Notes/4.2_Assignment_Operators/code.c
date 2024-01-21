#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // NOTE: Type Conversion Examples
  int i = 72.99f; // i is now 72
  float f = 136;  // f is now 136.0
  f = i = 33.333; // i and f are both 33

  // NOTE: Assignments can be chained together
  int j, k;
  i = j = k = 0;     // i, j and k are all 0 assigned right to left
  i = (j = (k = 0)); // this does the same

  // NOTE: Assignment can be used like any other operator
  i = 1;
  k = 1 + (j = 1);
  printf(
      "%d %d %d", i, j,
      k); // will output 1 1 2 since j = 1 is equivalent to 1 in the expression

  // NOTE: The assignment operator requires an lvalue as a left operand
  // an L-value is an object stored in memory like a variable and not a const
  // or the result of a computation, v is an lvalue, 10 is not an lvalue
  12 = i;    // invalid
  i + j = 0; // invalid
  -i = j;    // invalid

  // NOTE: Compound Assignment Examples
  i = i + 1;
  i += 1;
  i -= 1;
  i *= 1;
  i /= 1;
  i %= 1;

  return EXIT_SUCCESS;
}
