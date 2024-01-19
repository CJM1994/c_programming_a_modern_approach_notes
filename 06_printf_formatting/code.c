#include <stdio.h>

int main() {
  int i;
  float f;

  i = 40;
  f = 839.21f;

  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf("|%f|%10.3f|%10.3e|%10g|", f, f, f, f);
  printf("\a");
}
