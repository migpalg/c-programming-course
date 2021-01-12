/**
 * Switch operator with an enum and goto operator
 */
#include <stdio.h>
#include <stdbool.h>

enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(int argc, char const *argv[])
{
  enum Weekday today = Monday;

  switch (today) {
    case Monday:
      printf("You have to work!\n");
      break;
    default:
      printf("Stay home! :)\n");
      break;
  }
}
