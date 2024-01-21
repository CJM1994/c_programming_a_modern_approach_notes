#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void print_upc_check_digit() {
  int first_digit, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit;
  int first_sum, second_sum;

  printf("Enter the first (single) digit: ");
  scanf("%d", &first_digit);
  printf("Enter the first group of 5 digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter the second group of 5 digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  first_sum = first_digit + i2 + i4 + j1 + j3 + j5,
  second_sum = i1 + i3 + i5 + j2 + j4;
  check_digit = 9 - (((first_sum * 3 + second_sum) - 1) % 10);

  printf("Check digit: %d\n", check_digit);

  // RESULT
  // Enter the first (single) digit: 0
  // Enter the first group of 5 digits: 51500
  // Enter the second group of 5 digits: 24128
  // Check digit: 8
}

int main() {
  // NOTE: BINARY OPERATORS
  // + addition
  // - subtraction
  // * multiplication
  // / division (drops fractional part if 2 ints)
  // % modulo/remainder (int only, no floating point operands allowed)

  // NOTE: UNARY OPERATORS
  // + unary plus (does nothing but emphasize a numeric constant is positive)
  // - unary minus (makes numberic constant negative)

  // NOTE: OTHER
  // - the behaviour of modulo and division with negative operands depends on
  // the implementation of C (C99 vs C89, etc)

  print_upc_check_digit();
  return EXIT_SUCCESS;
}
