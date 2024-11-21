#include <stdio.h>

int main() {
  const int size = 10;
  int score[10] = {
      19, 42, 34, 1, 13, 18, 52, 12, 19, 45};
  int max = 0;
  int x;

  for (x = 0; x < size; x++) {
    max = (score[x] > max) ? score[x] : max;
    // if (score[x] > max)
    //   max = score[x];
  }

  printf("The maximum value is %d\n", max);

  return (0);
}
