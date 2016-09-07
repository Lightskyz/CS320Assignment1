//Include library to allow in and out functions, here printf and scanf
#include <stdio.h>
//Include library to allow convert functions, here atof
#include <stdlib.h>
//Include library to allow math functions, here cos
#include <math.h>

//argc is the number of arguments and argv contains pointers to the arguments
int main(int argc, char const *argv[]) {

  //We put 3 arguments because the program name count as the first argument.
  //So it's the condition if we put 2 arguments in input for executing the code.
  if( argc == 3 ) {

      //Variables of my name and email
      char name[] = "Antoine Rakotozafy";
      char email[] = "antoine.rakotozafy@gmail.com";

      //Get the first command line argument which is a char and convert to double
      double n = atof(argv[1]);
      //Get the second commant line argument which is a char and convert to double
      double step = atof(argv[2]);

      //Variable for my loops
      int i;

      //Initiate my variable step at 0
      double s = 0.0;

      //Variable to store my step that I increment by step
      double x;
      double y;

      //Constant PI
      const double PI = 3.141;

      //Output of the Assignment title
      printf("Assignment #1-4, %s, %s \n", name, email);

      //Fist loop for the second line print, n value that I'll calculate.
      for (i = 0; i < n; i++) {
        //Print value with 2 decimals
         printf("%.2lf  ", x);
         x = x + step;
      };

      //Line feed
      printf("\n");

      //Seconde loop for the third line print, n value of cos(value on the line above)
      for (i = 0; i < n; i++) {
        //Convert the value of the line above from radian to degree
        s = y*PI/180;
        //Calculate the cosine with 2 decimals
        printf("%.2lf  ", cos(s));
        y = y + step;
      };

      //Line feed
      printf("\n");
   }

   //If there is more than 2 arguments, print this message
   else if( argc > 3 ) {
      printf("Too many arguments supplied. Two arguments expected\n");
   }
   //If there is less than 2 arguments, print this message
   else {
      printf("Two arguments expected.\n");
   }
}
