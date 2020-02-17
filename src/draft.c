#include <stdio.h>
#include <string.h>

int main () {

  char sex[6];
  int age;

  scanf("%s%d", sex, &age);

  if(strcmp(sex, "male") == 0) {
    if(age >= 20){
      printf("yes");
    }else{
      printf("no");  
    }
  }else{
    printf("no");
  }

  return 0;
}