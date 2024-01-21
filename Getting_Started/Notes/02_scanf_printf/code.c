#include <stdio.h>

int main() {
  // logging with printf
  int seven = 7;
  int nine = 9;
  char letter = 'y';
  char letters[6] = "hello"; // need one additional space for the \0 null char
  char words[] = "Here is a sentence.";

  printf("The numbers I have are %d and %d!\n", seven, nine);
  printf("The letter I have is %c!\n", letter);
  printf("The letters I have are %s!\n", letters);

  // table
  float root2 = 1.4142;
  float phi = 1.618034;
  float pi = 3.1415926;

  printf("%10s%10s%10s%10s\n", "multiple", "root2", "phi", "pi");
  printf("%10s%10.4f%10.4f%10.4f\n", "1x", root2, phi, pi);
  printf("%10s%10.4f%10.4f%10.4f\n", "2x", root2 * 2, phi * 2, pi * 2);

  // using scanf
  int age;
  char first_name[10];

  printf("Please enter your age and first name separated by a space.\n");
  scanf("%i%s", &age, first_name); // scanf takes a pointer
  printf("Your age is %i, and your name is %s!\n", age, first_name);

  return 0;
}
