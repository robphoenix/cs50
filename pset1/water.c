#include <cs50.h>
#include <stdio.h>

#define BOTTLES 12

int main() {
  int m = get_int("How long do you shower for (in minutes) ? ");
  printf("Minutes: %i\nBottles: %i\n", m, m * BOTTLES);
}
