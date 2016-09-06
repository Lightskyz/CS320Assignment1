//Include library to allow in and out functions, here printf and scanf
#include <stdio.h>
//Include library to allow math functions, here cosh
#include <math.h>

int main() {

  //Variables of my name and email
  char name[] = "Antoine Rakotozafy";
  char email[] = "antoine.rakotozafy@gmail.com";

  //Variable of the user input, the result of cosh
  double x;
  double result;
  //Constant PI
  const double PI = 3.141;

  //Output of the Assignment title
  printf("Assignment #1-3, %s, %s \n", name, email);

  printf("Please input an integer: \n");
  //User input
  scanf("%lf", &x);

  //Convert angle from radians to degree
  x = x*PI/180;

  //Calculate the hyperbolic cosine with the angle in degree
  result = cosh(x);
  //Print the result with 3 decimals
  printf("%.3lf \n", result);

}
