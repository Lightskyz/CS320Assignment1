#include <stdio.h>
#include <math.h>

int main() {

  double x;
  double result;
  double PI = 3.141;
  char name[] = "Antoine Rakotozafy";
  char email[] = "antoine.rakotozafy@gmail.com";

  printf("Assignment #1-3, %s, %s \n", name, email);

  printf("Please input an integer: \n");
  scanf("%lf", &x);
  //Convert angle from radians to degree
  x = x*PI/180;

  result = cosh(x);
  printf("%.3lf \n", result);

}
