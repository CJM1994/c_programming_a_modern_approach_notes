#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Calculating a brokers commission
  float val, com;
  printf("Enter value of trade: ");
  scanf("%f", &val);

  if (val <= 2500) {
    com = val * 0.017 + 30;
  } else if (val > 2500 && val <= 6250) {
    com = val * 0.0066 + 56;
  } else if (val > 6250 && val <= 20000) {
    com = val * 0.0034 + 76;
  } else if (val > 20000 && val <= 50000) {
    com = val * 0.0022 + 100;
  } else if (val > 50000 && val <= 5000000) {
    com = val * 0.0011 + 155;
  } else if (val > 5000000) {
    com = val * 0.0009 + 255;
  }

  printf("Commission: $%.2f\n", com);

  return EXIT_SUCCESS;
}

// NOTE: RESULT
// Enter value of trade: 30000
// Commission: $166.00
