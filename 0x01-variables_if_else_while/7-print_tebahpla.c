#include <stdio.h>

int main(void)
{
	    char c;

	        /* Loop to print the lowercase alphabet in reverse */
	        for (c = 'z'; c >= 'a'; c--)
			    {
				            putchar(c);  /* Print each letter */
					        }

		    putchar('\n');  /* Print a newline after the letters */

		        return (0);  /* Return 0 to indicate successful completion */
}

