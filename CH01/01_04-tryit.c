#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define CONDITION_REVERSED 0

int main() {
  int sensor;
  const int min = 40;
  const int max = 60;

  /* seed the randomizer */
  srand((unsigned)time(NULL));

  /* sensor reports robot's path
     range from 0 to 99 */
  sensor = rand() % 100;

  printf("Sensor reports: %d\n", sensor);
  /* guide the robot */

#if CONDITION_REVERSED == 0
  if ((sensor >= min) && (sensor <= max)) {
    printf("Robot on course!\n");
  } else {
    printf("Robot off course!\n");
  }
#else
  if ((sensor < min) || (sensor > max)) {
    printf("Robot off course! (R)\n");
  } else {
    printf("Robot on course! (R)\n");
  }
#endif

  return (0);
}
