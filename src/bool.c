#include <stdio.h>

int main () {

  printf("%d\n", 10 == 10);
  printf("%d\n", 10 != 10);

  if(1){
    printf("1:true\n");
  }else{
    printf("1:false\n");
  }

  if(0){
    printf("0:true\n");
  }else{
    printf("0:false\n");
  }

  if(0.0){
    printf("0.0:true\n");
  }else{
    printf("0.0:false\n");
  }

  if(99){
    printf("99:true\n");
  }else{
    printf("99:false\n");
  }

  if(-1){
    printf("-1:true\n");
  }else{
    printf("-1:false\n");
  }

  if(88.88){
    printf("88.88:true\n");
  }else{
    printf("88.88:false\n");
  }

  if(NULL){
    printf("NULL:true\n");
  }else{
    printf("NULL:false\n");
  }

  return 0;
}