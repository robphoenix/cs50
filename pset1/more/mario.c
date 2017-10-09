#include <cs50.h>
#include <stdio.h>

int main() {
  int height = -1;
  while (height < 0 || height > 23) {
    height = get_int("Height: ");
  }
  for (int line = 1; line < height + 1; ++line) {

    int part = height - line;

    for (int space = 0; space < part; space++) {
      printf(" ");
    }
    for (int hash = 0; hash < height - part; hash++) {
      printf("#");
    }
    printf("  ");
    for (int hash = 0; hash < height - part; hash++) {
      printf("#");
    }
    printf("\n");
  }
}
