#include <stdio.h>

int main() {

  char name[] = "Antoine Rakotozafy";
  char email[] = "antoine.rakotozafy@gmail.com";
  char fname[100];

  printf("Assignment #1-2, %s, %s \n", name, email);
  printf("Hello! What is your name? \n");
  scanf("%s", fname);
  printf("Hello %s. Nice to meet you ! \n", fname);

}
