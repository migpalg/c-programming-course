/**
 * Guess the number game
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RAND_VALUE 0
#define MAX_RAND_VALUE 20
#define MAX_GUESSES 5

int main(int argc, char const *argv[])
{
  time_t t; // Variable to storage the time
  int user_entry = 0; // Current user entry
  int number_to_guess = 0; // Number to be guessed
  int guess_count = 0;
  bool user_wins = false;
  bool is_playing = true; // The number was guessed?

  // Set seed to generate random number
  srand((unsigned)time(&t));

  number_to_guess =
    (rand() % MAX_RAND_VALUE - MIN_RAND_VALUE + 1) + MIN_RAND_VALUE;

  printf("Welcome to guess the number game!\n");
  printf("Try to guess the number, lets start:\n");

  while (is_playing) {
    if (guess_count >= MAX_GUESSES) {
      is_playing = false;
      user_wins = false;
      continue;
    }

    printf("\nType a number:\n> ");

    scanf("%d", &user_entry);

    if (user_entry == number_to_guess) {
      is_playing = false;
      continue;
    } else if (user_entry > number_to_guess) {
      printf("The number is less than that.\n");
    } else {
      printf("The number is more than that.\n");
    }

    printf("Oops! You have %d more guess intents!\n", MAX_GUESSES - ++guess_count);
  }

  printf(
    user_wins
      ? "Congratulations! The number was %d!\n\n"
      : "Ooops! Try again. The number was %d\n",
      number_to_guess
  );

  return 0;
}
