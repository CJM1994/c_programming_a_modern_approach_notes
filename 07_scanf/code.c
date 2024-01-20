#include <stdio.h>

void print_fraction_addition() {
  // TEST: PROGRAM: ADDING FRACTIONS
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter 2 fractions to add separated by a space: \n");
  scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("The resulting fraction is: %d/%d", result_num, result_denom);
}

int main() {
  // Testing output
  printf("%6d,%4d\n", 86, 1040);
  printf("%12.5e\n", 30.253);
  printf("%.4f\n", 83.162);
  printf("%-6.2g\n", .0000009979);

  // TEST: EXERCISE DISPLAY FLOATS
  //
  // Exponential notation; left-justified in a field of size 8; one digit after
  // the decimal point.
  printf("|%-8.1e|\n", 5.0);
  // Exponential notation; right-justified in a field of size 10; six digits
  // after the decimal point.
  printf("|%10e|\n", 7.123456789);
  // Fixed decimal notation; left-justified in a field of size 8; three digits
  // after the decimal point.
  printf("|%-8.3f|\n", 2.234);
  // Fixed decimal notation; right-justified in a field of size 6; no digits
  // after the decimal point.
  printf("|%6.0f|\n", 2.3);

  print_fraction_addition();
}
