/*
Name: Elijah Christy
Date: 3-27-2018
Description: C291 Assignment 2 Question 3
Initial Algorithm: Include necessary library headers.
Establish necessary variables for the functions. Revise as needed.
Create a line finder function that informs the user of the line parameters and receives their input regarding the number of lines.
Create a line building function that receives a symbol from the user along with the number of symbols in each line.
Default to the specified value if the user fails to enter valid input.
Print an additional tab for each line, beginning at 0.
Run the line building function in the main code.
*/

// This code is currently not functional, but it is my best attempt at the specified program for question 3.
// Please view the logic below before considering a grade.

#include <stdio.h>

int num_lines;
char symbol;
int num_symbols;

void line_finder()
{
printf("Please select a number of lines between 5 and 9: ");
 scanf("%d", num_lines);
 if(num_lines > 9 || num_lines < 5)
   {
     printf("Your selection was invalid.");
     line_finder();
   }
}

void line_builder()
  int i, k, j;
{
  line_finder();
  printf("\nPlease enter a character: ");
  scanf("%c", symbol);
  printf("\nHow many symbols should each line contain? ");
    scanf("%d", num_symbols);
  if(num_symbols > 20 || num_symbols < 8)
    {
      num_symbols = 15;
    }
  int current_tab = 1;
  for(i = 0; i < num_lines; i++)
    {
      for(k = 0; k < num_tabs; k++)
	{
	  printf("\t");
	}
      num_tabs += 0;
      for(j = 0; j < num_symbols; j++)
	{
	  printf(symbol);
	}
    }
}

int main()
{
  line_builder();
}
