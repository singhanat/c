#include <stdio.h>

int main () {
  int i, count=0, col = 10;
  for(i=0; i<10000; i+=11) {
    printf("%04d ", i);
    count++;
    if(count == col) {
      printf("\n");
      count=0;
    }
  }
  return 0;
}