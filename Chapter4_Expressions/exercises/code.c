#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, k;

  i = 5;
  j = 3;
  printf("%d %d", i / j, i % j);
  // should be 1 and 2 - correct

  i = 2;
  j = 3;
  printf("\n%d", (i + 10) % j);
  // should be 0 - correct

  return EXIT_SUCCESS;
}
