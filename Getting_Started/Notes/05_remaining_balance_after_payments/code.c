/*
 * Write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments: Enter amount of loan: 20000,00
 * Enter interest rate: 6.0 Enter monthly payment: 386.66
 */

#include <stdio.h>

int main() {
  float loan, rate, monthly_payment;

  printf("Enter the amount of the loan: ");
  scanf("%f", &loan);
  printf("\nEnter the interest rate: ");
  scanf("%f", &rate);
  printf("\nEnter the monthly payment: ");
  scanf("%f", &monthly_payment);

  loan = (loan - monthly_payment) + (rate / 1200 * loan);
  printf("\nThe balance after the first monthly payment is: %.2f\n", loan);
  loan = (loan - monthly_payment) + (rate / 1200 * loan);
  printf("The balance after the second monthly payment is: %.2f\n", loan);
  loan = (loan - monthly_payment) + (rate / 1200 * loan);
  printf("The balance after the third monthly payment is: %.2f\n", loan);
}
