#include <stdio.h>

int main() {
  char date[11];
  int item;
  float price;

  printf("Enter purchase date (MM/DD/YYYY): ");
  scanf("%s", date);
  printf("\nEnter unit price: ");
  scanf("%f", &price);
  printf("\nEnter item number: ");
  scanf("%d", &item);

  printf("\n\nItem\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%.2f\t%s", item, price,
         date);
  return 0;
}
