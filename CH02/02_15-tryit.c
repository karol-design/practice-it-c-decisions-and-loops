#include <stdio.h>
#include <string.h>

/* convert the newline character in a string
   to a null character (termination) */
void stripnl(char *s) {
  /* string s is already initialized */
  while (*s) {
    if (*s == '\n') {
      *s = '\0'; /* replace the newline with nulchar */
      return;    /* and leave */
    }
    s++; /* keep working through the string */
  }
}

int main() {
  const int size = 32; /* input size */
  const char *quit = "exit";
  char command[32];

  do {
    printf("Command: ");
    /* fetch input */
    fgets(command, size, stdin);
    /* swap newline for null char */
    stripnl(command);
    /* output command */
    printf(">> trying to '%s'\n", command);
    printf("Success!\n");
  } while (strcmp(command, quit) != 0);

  return (0);
}
