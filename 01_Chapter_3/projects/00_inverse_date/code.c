#include <stdio.h>

int main() {
  int m, d, y;
  printf("Enter a date in the formate MM/DD/YYYY: ");
  scanf("%d/%d/%d", &m, &d, &y);
  printf("You entered the date: %d%.2d%.2d", y, m, d);
  return 0;
}
