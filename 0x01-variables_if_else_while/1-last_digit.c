#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	    int n, last_digit;

	        srand(time(0)); // Seed the random number generator
				//     n = rand() - RAND_MAX / 2; // Assign a random number to n
				//
				//         last_digit = n % 10; // Calculate the last digit of n
				//
				//             printf("Last digit of %d is %d ", n, last_digit);
				//
				//                 // Check the value of the last digit and print the appropriate message
				//                     if (last_digit > 5)
				//                         {
				//                                 printf("and is greater than 5\n");
				//                                     }
				//                                         else if (last_digit == 0)
				//                                             {
				//                                                     printf("and is 0\n");
				//                                                         }
				//                                                             else
				//                                                                 {
				//                                                                         printf("and is less than 6 and not 0\n");
				//                                                                             }
				//
				//                                                                                 return (0);
				//                                                                                 }
				//
