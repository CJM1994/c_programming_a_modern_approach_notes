#include <stdio.h>

void program_adding_fractions() {
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter 2 fractions to add separated by a space: \n");
  scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("The resulting fraction is: %d/%d", result_num, result_denom);
}

void exercise_3_1() {
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
}

void section_3_2() {
  int i, j;
  float x;
  scanf("%d%f%d", &i, &x, &j);
  printf("%d %f %d\n", i, x, j);
  // If the user enters
  // 10.3 5 6
  // what will be the values of i, x, and j after the call? (Assume that i and j
  // are int variables and x is a float variable.)
  // Answer: should fill the first int with 10, then hit the decimal and move to
  // the float which will be .3 until it hits whitespace and moves on to the
  // last int which will be 5, then it will hit the whitespace and 6 will sit in
  // the buffer for a future printf or will need to be cleared

  // For each of the following pairs of scanf format strings, indicate whether
  // or not the two strings are equivalent. If they’re not. show how they can be
  // distinguished.
  // (a) "%d" versus " %d"
  // Should be equivalent
  // (b) "%d-%d-%d'' versus "%d -%d -%d"
  // No, this would fail
  // (c) "%f" versus "%f "
  // No, this would require an extra input at the end to run
  // (d) "%f,%f, versus "%f, %f"
  // Yes, these should be equivalent
  float a, b;
  int c;

  scanf("%f%d%f", &a, &c, &b);
  printf("%f %d %f\n", a, c, b);
}

int main() {
  exercise_3_1();
  section_3_2();
  program_adding_fractions();
}
