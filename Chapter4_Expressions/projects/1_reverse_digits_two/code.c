#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Write a program that takes a 2 digit num then prints the num with its
  // digits reversed.
  int x, d1, d2;
  printf("Enter a 2 digit number: ");
  scanf("%2d", &x);
  d2 = x % 10;
  d1 = (x - d2) / 10;
  printf("The reversal is: %d%d\n", d2, d1);
  // Enter a 2 digit number: 28
  // The reversal is: 82

  return EXIT_SUCCESS;
}
