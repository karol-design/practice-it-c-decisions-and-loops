#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int m;

  /* seed the randomizer */
  srand((unsigned)time(NULL));

  printf("Mondays this month: ");

  /* fetch a random starting date
     range 1 to 7 */
  m = rand() % 7 + 1;

  // for (; m <= 31; m += 7) {
  //   printf("%d ", m);
  // }

  while (m <= 31) {
    printf("%d ", m);
    m += 7;
  }

  return (0);
}
