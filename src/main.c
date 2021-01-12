/**
 * Designated initializers
 * Author: Miguel Ángel Palacio González
 */

#include <stdio.h>

#define MONTHS 12

int main(int argc, char *argv[])
{
  int days[MONTHS] = { 31, 28, [4] = 31, /* [5] = */30, 31, [1] = 29 };

  for (int i = 0; i < MONTHS; i++)
    printf("Month #%d -> %d days\n", i, days[i]);

  return 0;
}
