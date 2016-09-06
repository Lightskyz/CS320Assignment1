#include <stdio.h>
#include <math.h>

int main() {

  char name[] = "Antoine Rakotozafy";
  char email[] = "antoine.rakotozafy@gmail.com";

  int i;
  double n;
  double s = 0.0;
  double step;
  double x;
  double y;
  double PI = 3.141;

  printf("Assignment #1-4, %s, %s \n", name, email);

  scanf("%lf %lf", &n, &step);

  for (i = 0; i < n; i++) {
     printf("%.2lf  ", x);
     x = x + step;
  };
  printf("\n");

  for (i = 0; i < n; i++) {
    s = y*PI/180;
    printf("%.2lf  ", cos(s));
    y = y + step;
  };
  printf("\n");

}
