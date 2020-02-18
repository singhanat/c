#include <stdio.h>
#include <string.h>

int main () {

  char in[1000001];
  int n, i, temp, sign = '+';
  int f3out = 0, f3[3] = {0, 0, 0}, f11 = 0;

  scanf("%s", in);
  n = strlen(in);

  for(i=n-1; i>=0; i--){
    temp = in[i] - '0';
    f3[temp%3]++;
    if(sign == '+') f11 = (f11 + temp)%11, sign = '-';
    else f11 = (f11 - temp)%11, sign = '+';
  }

  f3out = (f3[1] == f3[2] ? 0 : (f3[1] > f3[2] ? (f3[1] - f3[2])%3 : (f3[2] - f3[1])*2%3));

  printf("%d %d\n", f3out, (f11 >= 0 ? f11 : f11+11));
  
  return 0;
}
