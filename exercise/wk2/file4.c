/*Debugging quiz - File No: 4 */
/* This program should perform the duties of a basic calculator */
// Check for possible logical errors and rectify them 

#include<stdio.h>

int main(void){
	char input;
	float num1, num2, result;
	printf("Welcome to the Calculator\nOperation choices:\tAddition(A)\n\t\t\tSubtraction(S)\n\t\t\tMultiplication(M)\n\t\t\tDivision(D)\nEnter choice: ");

	input = getchar();
	getchar();

	if(input == 'A' || input == 'S' || input == 'M' || input == 'D'){
		printf("Enter the first of two numbers: ");
		scanf("%f", &num1);
		printf("Enter the second number: ");
		scanf("%f", &num2);
		
	
		switch(input){
			case 'A': 
			result = num1 + num2;
			printf("The final result = %f\n", result);
          			break;
			case 'S': 
			result = num1 - num2;
			printf("The final result = %f\n", result);
          			break;
			case 'M': 
			result = num1 * num2;
			printf("The final result = %f\n", result);
          			break;
			case 'D': 
			result = num1 / num2;		//Are there any logical errors possible? If so, how will you solve it?
			if(num2 ==0 || num2 == 0){
			  printf("You cannot divide by 0.\n");
			} 
			else{
			  printf("The final result = %f\n", result);
			}
	 			break;
                			  
			default: break; }
		
	}

	else{
		printf("You did not choose a valid operation\n");
	}

	return(0);
}
