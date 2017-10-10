#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main() {
  float owed = -1;
  while (owed < 0) {
    owed = get_float("How much change is owed?\n");
  }
  owed *= 100;
  int change;
  change = (int)round(owed);
  int coins = 0;
  int cur = 0;
  int denominations[4] = {25, 10, 5, 1};
  while (change) {
    int denomination = denominations[cur];
    while (change >= denomination) {
      change -= denomination;
      coins++;
    }
    cur++;
  }
  printf("coins: %d\n", coins);
}
