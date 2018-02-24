/*Debugging quiz - File No: 2 */
/* The program should correctly print the stored variable values of number and a*/
/* It should print the correct ASCII value of alphabet */

#include <stdio.h>

int main()
{
	int number = 7.2899, b = 9;
	float alphabet = 'x';
	printf("%Lf\n",&number);
	printf("%d",&b);
	printf("The ASCII value of character 'x' is : %f",alphabet);
	return 0;
}
