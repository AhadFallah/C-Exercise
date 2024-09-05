#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int target;

void vuln(char *string) {
  printf(string);

  if (target) {
    printf("you have modified the target :)\n");
  }
}

int main(int argc, char **argv) {
  char string[127];
  printf("enter your string >>");
  scanf("%127s", string);
  vuln(string);
  printf("\n");
}
