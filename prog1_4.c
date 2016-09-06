#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  if( argc == 3 ) {
      char name[] = "Antoine Rakotozafy";
      char email[] = "antoine.rakotozafy@gmail.com";

      double n = atof(argv[1]);
      double step = atof(argv[2]);

      int i;

      double s = 0.0;
      double x;
      double y;
      double PI = 3.141;

      printf("Assignment #1-4, %s, %s \n", name, email);

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

   else if( argc > 3 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("Two arguments expected.\n");
   }
}
