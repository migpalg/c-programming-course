/**
 * C designated initializers
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
  float sample_data[500] = { [2] = 500.5, [1] = 300.0, [0] = 100.0 };

  printf("%f\n", sample_data[0]);
}
