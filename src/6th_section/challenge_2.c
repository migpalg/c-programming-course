#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  // Get the bytes used to store data types
  unsigned long intSize = sizeof(int),
                charSize = sizeof(char),
                longSize = sizeof(long),
                longLongSize = sizeof(long long),
                doubleSize = sizeof(double),
                longDouble = sizeof(long double);

  printf(
    "Size of variables\n\tint:%zd\n\tchar:%zd\n\tlong:%zd\n\tlong long:%zd\n\tdouble:%zd\n\tlong double:%zd\n",
    intSize,
    charSize,
    longSize,
    longLongSize,
    doubleSize,
    longDouble
  );

  return 0;
}
