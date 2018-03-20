/* 
 * ------ Filename: main.c ------ 
 * Description: C program to fulfill excercise 1 requirements. 
 * Author: Elijah Christy
*/

#include <stdio.h>
#include <unistd.h>

int main(void) {
  int ID_number = 0;
  printf(" \"Hello, Welcome to Spring 2018\\C291/\" \n");
  printf("Please enter your user ID number and press ENTER: ");
  scanf("%d", &ID_number);  
  printf("ID: %010d\n",ID_number);
   
while(1)
  {
    sleep(1);
    printf("\t*");
    fflush(stdout);
  }
  return(0); 
}


