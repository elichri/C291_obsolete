/*Debugging quiz - File No: 3 */
/* The program should give out the appropriate message, given the grade as inpu\
   t */

#include<stdio.h>

int main(void) {

  int input;

  while(input != 'q' && input != 'Q')
    {
      printf("Enter the grade(A/B/C/D/F): (Q to Quit) \n");
      input = getchar();
      getchar();
     
      if(input == 'F' || input == 'D' ||  input == 'f' || input == 'd'){
	printf("You have not passed the course.\n");
      }
      else if(input == 'A' || input == 'B' || input == 'C' || input == 'a' || input == 'b' || input == 'c') {
	printf("You have passed!\n");
      }
      else {
	printf("You have entered an invalid character.\n");
      }
    }

  printf("Quit the menu.\n");
  return(0);
}
