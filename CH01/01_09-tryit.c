#include <stdio.h>

int main() {
  char meal;

  /* present the menu */
  puts("Meal Type (Choose One)");
  puts("A - Non-Restrictive");
  puts("B - Low Carb");
  puts("C - Low Fat");
  puts("D - Vegan");
  puts("E - Vegetarian");
  puts("F - Other");
  printf("Choice: ");
  scanf("%c", &meal);

  /* process their choice */
  switch (meal) {
    case 'A': {
      printf("Non-Restrictive\n");
      break;
    }
    case 'B': {
      printf("Low Carb\n");
      break;
    }
    case 'C': {
      printf("Low Fat\n");
      break;
    }
    case 'D': {
      printf("Vegan\n");
      break;
    }
    case 'E': {
      printf("Vegetarian\n");
      break;
    }
    case 'F':
    default: {
      printf("Other\n");
      break;
    }
  }

  /* report the results*/
  printf("You have chosen %c\n", meal);

  return (0);
}
