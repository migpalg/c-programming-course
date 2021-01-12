/**
 * 41. The cast and sizeof operators
 * Author: Miguel Palacio
 * Date: 01/01/2020
 */
#include <stdio.h>
#include <stdbool.h>

/**
 * Entry point of the application
 * @param argc Argument count
 * @param argv Argument vector
 */
int main(int argc, const char *argv[])
{
  // Explicit conversion with the casting operator
  int aNumber = 23.3212 + 2;

  // Get the bytes stored in memory of the "aNumber" variable
  unsigned long sizeInMemory = sizeof(aNumber);
  unsigned long sizeOfIntInMemorory = sizeof(int);
  unsigned long sizeOfDoubleInMemory = sizeof(double);

  printf(
    "Sizes in memory:\n\tint:%ld\n\tdouble:%ld\n",
    sizeOfIntInMemorory,
    sizeOfDoubleInMemory
  );

  // Asterisk operator represents a pointer to a variable
  char *charPointer = "Hello world!";

  // "?" Operator
  char *result = 4 % 2 == 0 ? "even" : "odd";

  // The unary and assignment operators associates right to left

  return 0;
}
