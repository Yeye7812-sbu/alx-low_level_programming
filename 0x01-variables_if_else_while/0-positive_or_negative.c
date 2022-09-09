#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assigns a random number to int n
 * and if the number is postive, negative or zero
 * Returns :0 always if successful
 */
int main(void)
{                    
	int n;
                       
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
        else
	        printf("%d is negative\n", n);

        return (0);
}
