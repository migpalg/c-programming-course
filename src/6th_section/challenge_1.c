#include <stdio.h>

int main(int argc, char const *argv[])
{
  int minutes;
  double years, days;

  // Scan a value passed in the terminal
  printf("Enter a value:\n");
  scanf("%d", &minutes);

  // Cast minutes to years
  years = (double) minutes / 525600;
  days = (double) minutes / 1440;

  // Casted values
  printf("%d minutes -> %f days -> %f years\n\n", minutes, days, years);

  return 0;
}
