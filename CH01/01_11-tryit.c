#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VAL_ACE 9
#define VAL_JACK 10
#define VAL_QUEEN 11
#define VAL_KING 12

int main() {
  int card;

  /* seed the randomizer */
  srand((unsigned)time(NULL));

  /* grab a random card, 13 to a suit */
  card = rand() % 13; /* range is 0 to 12 */

  switch (card) {
    case VAL_ACE: {
      printf("You drew card: Ace\n", card);
      break;
    }
    case VAL_JACK: {
      printf("You drew card: Jack\n", card);
      break;
    }
    case VAL_QUEEN: {
      printf("You drew card: Queen\n", card);
      break;
    }
    case VAL_KING: {
      printf("You drew card: King\n", card);
      break;
    }
    default: {
      printf("You drew card: %d\n", card - 1);
      break;
    }
  }

  return (0);
}
