#include <stdio.h>
#include <math.h>

int main () {

  double s, a, b, c;
  double p1, p2, p3;
  double area;

  scanf("%lf%lf%lf", &a, &b, &c);

  s = (a + b + c) / 2;

  p1 = (s - a);
  p2 = (s - b);
  p3 = (s - c);

  area = sqrt(s * p1 * p2 * p3);

  printf("%.02lf\n", area);

  return 0;
}