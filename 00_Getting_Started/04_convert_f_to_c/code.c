#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main() {
  float fahrenheit, celsius;

  printf("Enter a temperature in fahrenheit.\n");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
  printf("In celsius this is %.2f degrees!", celsius);

  return 0;
}
