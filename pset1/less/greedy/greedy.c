#include <cs50.h>
#include <stdio.h>

int main() {
  float change = get_float("How much change is owed?\n");
  change *= 100;
  int coins = 0;
  int cur = 0;
  float denominations[4] = {25, 10, 5, 1};
  while (change) {
    float denomination = denominations[cur];
    while (change >= denomination) {
      change -= denomination;
      coins++;
    }
    cur++;
  }
  printf("coins: %d\n", coins);
}
