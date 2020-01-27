#include <stdio.h>

int main () {

  int n;

  scanf("%d", &n);
  
  /* Logical operators */

  if((n%2==1 || n%10==2) && n>0 && n<100){
    printf("^O^\n");
  }

  /* Nested if */

  if(n%2==1 || n%10==2){
    if(n>0){
      if(n<100){
        printf("^O^\n");
      }
    }
  }

  /* nested if V.2 */

  if(n%2==1 || n%10==2)
  if(n>0)
  if(n<100) printf("^O^\n");

  return 0;
}