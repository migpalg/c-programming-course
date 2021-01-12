/**
 * Traditional form to initialize arrays
 * Author: Miguel Palacio
 */
#include <stdio.h>

#define MONTHS 12

int main(int argc, char *argv[])
{
  int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  for (int index = 0; index < MONTHS; index++) {
    printf("Month #%d has %d days\n", index + 1, days[index]);
  }
}
