/**
 * Section 7 - Challenge 1
 * Determine ammount of pay
 */

#include <stdio.h>
#include <stdbool.h>

// Program constants
#define BASIC_PAY_RATE 12
#define OVERTIME_HOURS 40
#define OVERTIME_HOURS_PAY_INCREMENT 1.5
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25

int main()
{
  unsigned short hours_worked = 0;
  unsigned short overtime_worked = 0;
  int net_pay = 0.0; // Should be calculated
  double total_pay;
  double applied_tax = 0.0;

  // Ask for the hours worked
  printf("Please enter the hours that you worked this week:\n");
  scanf("%hu", &hours_worked);

  if (hours_worked > OVERTIME_HOURS)
  {
    overtime_worked = hours_worked - OVERTIME_HOURS;
    hours_worked = OVERTIME_HOURS;
  }

  // Initial payment
  net_pay = hours_worked * BASIC_PAY_RATE;

  // Extra hours
  net_pay += overtime_worked * (BASIC_PAY_RATE * OVERTIME_HOURS_PAY_INCREMENT);

  printf("Your payment before taxes is: $%d\n", net_pay);

  // Apply first tax
  applied_tax += (double)(net_pay > 300 ? 300 : net_pay) * TAXRATE_300;

  if (net_pay > 300) {
    applied_tax += (double)(net_pay <= 450 ? net_pay - 300 : 150) * TAXRATE_150;
  }

  if (net_pay > 450) {
    applied_tax += (double)(net_pay - 450) * TAXRATE_REST;
  }

  printf("Applied taxes: -$%.2f\n", applied_tax);

  // Calculates total payment
  total_pay = net_pay - applied_tax;

  printf("Total payment: $%.2f\n", total_pay);

  return 0;
}
