#include <stdio.h>
#include <stdlib.h>

// NOTE: European countries use a 13-digit code, known as a European Article
// Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in
// North America. Each EAN ends with a check digit, just as a UPC does.
// Calculate the check digit from the rest of the EAN.

int main() {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, check_digit;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6,
        &d7, &d8, &d9, &d10, &d11, &d12);

  check_digit =
      9 -
      ((((d2 + d4 + d6 + d8 + d10 + d12) * 3 + (d1 + d3 + d5 + d7 + d9 + d11)) -
        1) %
       10);

  printf("Check digit: %d\n", check_digit);

  return EXIT_SUCCESS;
}

// NOTE:
// Enter the first 12 digits of an EAN: 869148426000
// Check digit: 8
