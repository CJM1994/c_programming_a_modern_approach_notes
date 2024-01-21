#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, d1, d2, d3;

  printf("Enter a 3 digit number: ");
  scanf("%3d", &x);

  d3 = (x % 100) % 10;
  d2 = ((x % 100) - d3) / 10;
  d1 = (x - (d2 * 10 + d3)) / 100;

  printf("The reversal is: %d%d%d\n", d3, d2, d1);

  return EXIT_SUCCESS;
}

// NOTE:
// Enter a 3 digit number: 128
// The reversal is: 821
