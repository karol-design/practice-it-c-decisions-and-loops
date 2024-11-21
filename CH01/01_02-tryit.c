#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int t;
  const int TRIGGER = 0;

  /* seed the randomizer */
  srand((unsigned)time(NULL));

  /* fetch the temperature in a 45 degree
     range from -10 to 35 */
  t = rand() % 45 - 10;

  /* output the current temperature */
  printf("The temperature is %d degrees\n", t);

	/* Decide whether the heater should be active or not */
  if (t > TRIGGER) {
    printf("The heater is inactive");
  } else {
    printf("The heater is active");
  }

  return (0);
}
