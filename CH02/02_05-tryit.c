#include <stdio.h>

int main() {
  const int size = 10;
  int score[10] = {
      19, 42, 34, 1, 13, 18, 52, 12, 19, 45};

  for (int x = 0; x < size; x++) {
    printf("Score value: %d\n", score[x]);
  }

  return (0);
}
