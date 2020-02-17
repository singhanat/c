#include <stdio.h>

int main () {
  int score, grade;

  scanf("%d", &score);

  grade = 0;
  grade = (score >= 50 ? 1 : grade);
  grade = (score >= 60 ? 2 : grade);
  grade = (score >= 70 ? 3 : grade);
  grade = (score >= 80 ? 4 : grade);
 
  printf("%d\n", grade);
}