#include <stdio.h>

int main () {
  int m, n, result;
  scanf("%d%d", &m, &n);
  result = n / m + (n % m ? (m > n ? 2 : 1) : 0);
  printf("%d\n", result);
  return 0;
}