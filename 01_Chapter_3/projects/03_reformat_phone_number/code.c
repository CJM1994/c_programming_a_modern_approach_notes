#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int country, area, local;

  printf("Enter phone number in the format (xxx) xxx-xxxx: ");
  scanf("(%d) %d-%d", &country, &area, &local);
  printf("You entered %d.%d.%d", country, area, local);

  return EXIT_SUCCESS;
}
