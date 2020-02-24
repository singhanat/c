#include <stdio.h>

int main () {

  char cipher[16];
  char plain[16];
  int i;

  scanf("%s", cipher);

  for(i=0; cipher[i] != '\0'; i++){
    
    if(cipher[i] >= 'A' && cipher[i] <= 'Z') {

      if(cipher[i] - 2 >= 'A') {

        plain[i] = cipher[i] - 2;

      }else if(cipher[i] - 2 == 'A' - 1) {

        plain[i] = 'Z';

      }else{

        plain[i] = 'Y';

      }

    }else if(cipher[i] >= 'a' && cipher[i] <= 'z') {

      if(cipher[i] - 2 >= 'a') {

        plain[i] = cipher[i] - 2;

      }else if(cipher[i] - 2 >= 'a' - 1) {

        plain[i] = 'z';

      }else{

        plain[i] = 'y';

      }

    }else{

      plain[i] = cipher[i];

    }

  }

  plain[i] = '\0';

  printf("%s\n", plain);

  return 0;
}