#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  printf("%d %d\n", n%3, n%11);
  return 0;
}