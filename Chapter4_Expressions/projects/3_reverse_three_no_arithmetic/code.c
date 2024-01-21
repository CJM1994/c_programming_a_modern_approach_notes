#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int d1, d2, d3;

  printf("Enter a 3 digit number: ");
  scanf("%1d%1d%1d", &d1, &d2, &d3);

  printf("The reversal is: %d%d%d\n", d3, d2, d1);

  return EXIT_SUCCESS;
}

// NOTE:
// Enter a 3 digit number: 128
// The reversal is: 821
