//Include library to allow in and out functions, here printf and scanf
#include <stdio.h>

int main() {

  //Variables of my name and email
  char name[] = "Antoine Rakotozafy";
  char email[] = "antoine.rakotozafy@gmail.com";

  //Variable fname where we'll stock the first name
  char fname[100];

  //Output of the Assignment title
  printf("Assignment #1-2, %s, %s \n", name, email);

  printf("Hello! What is your name? \n");
  //User input that we store in the variable fname
  scanf("%s", fname);
  //Print the fname with a sentence
  printf("Hello %s. Nice to meet you ! \n", fname);

}
