/*
Name: Elijah Christy
Date: 3-27-2018
Description: C291 Assignment 2 Question 2
Initial Algorithm: Include necessary library headers.
Create a menu function that informs the user of any available choices.
Create functions that print each respective shape.
Store user input and begin a while loop with a run variable.
Create a switch that calls a shape function when the appropriate letter is selected.
Break the while loop after each call, setting run to 0 when 'Q' is called.
The switch default should be the menu so the user will always be aware of their options.
Run the switch logic in the main code.
*/
#include <stdio.h>

void menu()
{
  printf("Please select a shape or type 'Q' to quit.\n");
  printf("Options: B(Box) O(Oval) S(Star) T(Triangle) H(Hut) Q(Quit)\n");
}

void box()
{
  printf("********\n*      *\n*      *\n*      *\n*      *\n*      *\n*      *\n********\n");
}

void oval()
{
  printf("  ***  \n *   * \n*     *\n*     *\n*     *\n*     *\n*     *\n *   * \n  ***  \n");
}

void star()
{
  printf("   *   \n*** ***\n *   * \n*** ***\n   *   \n");
}

void triangle()
{
  printf("***************\n *           * \n  *         *  \n   *       *   \n    *     *    \n     *   *     \n      * *      \n       *       \n");
}

void hut()
{
  printf("***   ***\n***   ***\n***   ***\n*********\n ******* \n  *****  \n   ***   \n    *    \n");
}

void shapes()
{
  char input;
  menu();
  int run = 1;
  while(run)
    {
      scanf("%c", &input);
      input = tolower(input);
      switch(input)
	{    
      case 'q':
	run = 0;
	break;
      case 'b':
	box();
	break;
      case 'o':
	oval();
	break;
      case 's':
	star();
	break;
      case 't':
	triangle();
	break;
      case 'h':
	hut();
	break;
      default:
	menu();
      }
    }
}

int main()
{
  shapes();
}

//See the initial algorithm for function clarification.
