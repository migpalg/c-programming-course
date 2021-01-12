/**
 * Newton raphson method to found a root in a function
 * Author: Miguel Palacio
 * Date:
 */
#include <stdio.h>
#include <math.h>

// Program constants
#define INITIAL_POINT 2
#define NUMBER_OF_ITERATIONS 30

/**
 * Target function
 * @param x Value to be evaluated in the function
 */
double f(double x) {
  return pow(x, 3) - 2;
}

/**
 * Function derivative
 * @param x Value to be evaluated in the function
 */
double dfx(double x) {
  return 3 * pow(x, 2);
}

/**
 * Get next point of the iteration
 * @param x Value to be evaluated in the function
 */
double get_next_point(double x)
{
  return x - f(x) / dfx(x);
}

/**
 * Entry point of the application
 */
int main(int argc, char const *argv[])
{
  double current_point = (double)INITIAL_POINT;

  for (int i = 0; i < NUMBER_OF_ITERATIONS; i++)
  {
    current_point = get_next_point(current_point);
  }

  printf("%f\n", current_point);

  return 0;
}
