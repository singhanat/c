#include <stdio.h>

int main () {
  int a, b;
  char op;
  int result;

  scanf("%d%c%d", &a, &op, &b);

  switch(op)
  {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    default:
      result = 0;
  }

  printf("%d\n", result);
}
