/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int num1,num2;
  float avg;

  printf("Input Number 01 : ");
  scanf("%d", &num1);
  printf("Input Number 02 : ");
  scanf("%d", &num2);

  avg = (num1 + num2)/2;

  printf("Average : %f", avg);

  return 0;
}

