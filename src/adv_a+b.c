#include <stdio.h>
#include <string.h>

int main () {

  int n, a[1000], b[1000], i;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++) scanf("%d", &a[i]);
  for(i=0; i<n; i++) scanf("%d", &b[i]);
  
  for(i=0; i<n; i++) printf("%d ", a[i] + b[i]);

  return 0;
}