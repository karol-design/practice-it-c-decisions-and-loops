#include <stdio.h>

int main() {
  const int max = 10;
  int h;
  double result = 0.0;

  /* initialize h */
  h = 1;
  while (h <= max) {
    printf("%d\n", h);
    /* trigger */
    result += (1.0 / (double)h);
    printf("Result: %.2lf\n", result);
    h++;
  }

  return (0);
}
