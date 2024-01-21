#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// NOTE:
// Rewrite the upc. c program of Section 4.1 so that the user enters 11 digits
// at one time, instead ofentering one digit, then five digits, and then another
// five digits.

int main() {
  int first_digit, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit;
  int first_sum, second_sum;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first_digit, &i1, &i2, &i3, &i4,
        &i5, &j1, &j2, &j3, &j4, &j5);

  first_sum = first_digit + i2 + i4 + j1 + j3 + j5,
  second_sum = i1 + i3 + i5 + j2 + j4;
  check_digit = 9 - (((first_sum * 3 + second_sum) - 1) % 10);

  printf("Check digit: %d\n", check_digit);

  return EXIT_SUCCESS;
}

// NOTE:
// Enter the first 11 digits of a UPC: 01380015173
// Check digit: 5
