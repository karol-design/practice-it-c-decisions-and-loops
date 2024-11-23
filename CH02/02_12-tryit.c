#include <stdio.h>

int main() {
  int a, b;

  for (a = 0, b = 0; b < 10; a--, b++) {
    printf("%d : %d\n", a, b);
  }

  return (0);
}
