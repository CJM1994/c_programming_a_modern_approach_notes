#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // NOTE: Relational Operators
  // Evaluate to 0 (false) or 1 (true)

  10 < 11; // resolves to 1
  10 > 11; // resolves to 0

  10 == 11; // resolves to 0
  10 == 10; // resolves to 1

  10 != 10; // resolves to 0
  10 != 11; // resolves to 1

  10 <= 11; // resolves to 1
  10 <= 10; // resolves to 1
  10 >= 11; // resolves to 0

  // NOTE: Operands of mixed types are allowed
  10 > 2.5;  // resolves to 1
  10 == 2.5; // resolves to 0

  !0; // resolves to 1
  !1; // resolves to 0

  1 && 1; // resolves to 1
  1 && 0; // resolves to 0

  1 || 1; // resolves to 1
  1 || 0; // resolves to 1
  0 || 0; // resolves to 0

  return EXIT_SUCCESS;
}
