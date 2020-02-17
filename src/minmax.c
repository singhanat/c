#include <stdio.h>

int main () {

  int n, i, x;
  int min, max;

  min = 1000000;
  max = -1;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &x);
    if(x > max) max = x;
    if(x < min) min = x;  
  }

  printf("%d %d\n", min, max);

  return 0;
}