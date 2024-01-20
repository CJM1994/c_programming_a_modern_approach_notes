#include <stdio.h>

void print_fraction_addition() {
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter 2 fractions to add separated by a space: \n");
  scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("The resulting fraction is: %d/%d", result_num, result_denom);
}

int main() { print_fraction_addition(); }
