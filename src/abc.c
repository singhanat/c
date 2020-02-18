#include <stdio.h>

int main () {
  
  int t[3], result[3] = {0, 0, 0}, check[3] = {0, 0, 0};
  int min = 1000, max = -1;
  int nMin = -1, nMax = -1, nMid = -1;
  char order[4];

  scanf("%d%d%d", &t[0], &t[1], &t[2]);
  scanf("%s", order);
  
  if(t[0] >= max) max = t[0], nMax = 0;
  if(t[1] >= max) max = t[1], nMax = 1;
  if(t[2] >= max) max = t[2], nMax = 2;

  check[nMax] = 1;
  
  if(t[0] <= min && check[0] != 1) min = t[0], nMin = 0;
  if(t[1] <= min && check[1] != 1) min = t[1], nMin = 1;
  if(t[2] <= min && check[2] != 1) min = t[2], nMin = 2;

  check[nMin] = 1;

  if(check[0] == 0) nMid = 0;
  if(check[1] == 0) nMid = 1;
  if(check[2] == 0) nMid = 2;

  result[0] = t[nMin];
  result[1] = t[nMid];
  result[2] = t[nMax];

  printf("%d %d %d\n", result[order[0]-'A'], result[order[1]-'A'], result[order[2]-'A']); 

  return 0;
}