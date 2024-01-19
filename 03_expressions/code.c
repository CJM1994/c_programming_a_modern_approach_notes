#include <stdio.h>

int main() {
  int number_one, number_two, number_three;

  printf("Simple Arithmetic: \n");
  printf("Enter two numbers separated by a space: \n");
  scanf("%i%i", &number_one, &number_two);

  printf("%i + %i = %i\n", number_one, number_two, number_one + number_two);
  printf("%i - %i = %i\n", number_one, number_two, number_one - number_two);
  printf("%i * %i = %i\n", number_one, number_two, number_one * number_two);
  printf("%i / %i = %i\n", number_one, number_two, number_one / number_two);
  printf("%i %% %i = %i\n", number_one, number_two, number_one % number_two);

  // ---

  printf("Order of Operations: \n");
  printf("Enter three numbers separated by a space: \n");
  scanf("%i%i%i", &number_one, &number_two, &number_three);
  printf("%i + %i / %i = %i\n", number_one, number_two, number_three,
         number_one + number_two / number_three);
  printf("(%i + %i) / %i = %i\n", number_one, number_two, number_three,
         (number_one + number_two) / number_three);

  // ---

  printf("Combining Types & Type Casting: \n");
  printf("%d\n", 1 / 3);        // returns 0
  printf("%f\n", 1.0 / 3);      // returns 0.333333
  printf("%f\n", 1 / 3.0);      // returns 0.333333
  printf("%f\n", 1.0 / 3.0);    // returns 0.333333
  printf("%f\n", (float)1 / 3); // returns 0.333333

  return 0;
}
