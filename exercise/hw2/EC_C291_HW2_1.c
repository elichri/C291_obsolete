/*
Name: Elijah Christy
Date: 3-27-2018
Description: C291 Assignment 2 Question 1
Initial Algorithm: Include necessary library headers.
Create a menu function that informs the user of any available choices.
Create functions that print each respective shape.
In the main code, print the user menu and store their choice in a variable.
Store each option in a while loop that is broken when the user selects 'Q'.
*/
#include <stdio.h> // Here, I have included the necessary library header.

void menu() // This function prints an instruction menu for the user.
{
  printf("Please select a shape or type 'Q' to quit.\n");
  printf("Options: B(Box) O(Oval) S(Star) T(Triangle) H(Hut) Q(Quit)\n");
}

// The following five functions print a shape. Each function is named after its resulting shape.

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

/* In the main code, I have printed the menu for the user and established a selection variable.
A while loop ensures that the user is free to select another shape after a selection has been made, and the menu will return after each selection.
Selecting 'Q' breaks this loop, ending the program as intended. */

int main()
{
  menu();
  char selection;
  while(1)
    {
      scanf("%c", &selection);
      selection = tolower(selection);
      if(selection == 'b')
	{
	  box();
	}

      else if(selection == 'o')
	{
	  oval();
	}

      else if(selection == 's')
	{
	  star();
	}

      else if(selection == 't')
	{
	  triangle();
	}

      else if(selection == 'h')
	{
	  hut();
	}

      else if(selection == 'q')
	{
	  break;
	}

      else
	{
	  menu();
	}
    }
}
