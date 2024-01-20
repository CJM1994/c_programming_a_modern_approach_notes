#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int prefix, group, publisher, item, check;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);
  printf("\nGS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem "
         "number: %d\nCheck digit: %d",
         prefix, group, publisher, item, check);

  return EXIT_SUCCESS;
}
