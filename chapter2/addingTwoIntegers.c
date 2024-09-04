#include <stdio.h>
int main(void) {
  int var1 = 0;
  int var2 = 0;
  printf("Enter your first number: ");
  scanf("%d", &var1); // read int
  printf("Enter your seccound number: ");
  scanf("%d", &var2);
  int sum = 0;
  sum = var1 + var2;
  printf("Sum is: %d\n", sum);
}
