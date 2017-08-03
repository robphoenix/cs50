#include <cs50.h>
#include <stdio.h>

int main() {
  int height = -1;
  while (height < 0 || height > 23) {
    height = get_int("Height: ");
  }
  int max = height + 1;
  for (int line = 1; line < max; ++line) {
    int part = height - line;
    for (int space = 0; space < part; space++) {
      printf("%s", " ");
    }
    for (int hash = 0; hash < max - part; hash++) {
      printf("%s", "#");
    }
    printf("\n");
  }
}
