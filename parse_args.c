#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char **parse_args(char *line) {
  char **arguments = malloc(6 * sizeof(char *));
  int i = 0;
  while(line) {
    arguments[i] = strsep(&line, " ");
    i++;
  }
  return arguments;
}

int main() {
  char line[] = "ls -a -l";
  char **args = parse_args(line);
  printf("Running 'ls -a -l'\n");
  execvp(args[0], args);

  return 0;
}