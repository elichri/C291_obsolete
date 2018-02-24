/*Debugging quiz - File No: 1 */
/* The program should print the sum of all the odd numbers from 1 to 100 */
/* Sum = 1 + 3 + 5 ... + 97 + 99 */

#include<stdio.h>

int main (void){
  int limit = 100, sum, counter;
  for(counter = 1; counter < limit-1; counter = counter+2){
    sum += sum+counter;

  }
    printf("Sum = %d\n", counter);
}
