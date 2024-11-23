#include <stdio.h>

#define MATRIX_ROWS 10
#define MATRIX_COLUMNS 10
#define ELEMENT_SIZE 3

int main() {
  char character;

  for (int i = 0; i < MATRIX_ROWS; i++) {
    character = 'A';
    for (int j = 0; j < MATRIX_COLUMNS; j++) {
      printf("%d%c\t", i, character++);
    }
    printf("\n");
  }

  return (0);
}
