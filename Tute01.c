/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int subject1, subject2;
  double average;

  printf("Enter the mark 1 :");
  scanf("%d", &subject1);

  printf("Enter the mark 2 :");
  scanf("%d", &subject2);

  average = (subject1 + subject2) / 2.0;

  printf("Average : %.2f", average);
  return 0;
}

