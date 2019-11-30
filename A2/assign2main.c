#include <stdio.h>
#include <stdlib.h>
#include "assign2funcs.h"
#define MAXSIZE 9 //max size of the vector
#define MINSIZE 0 //min size of the vector
/*
	I certify that this lab is entirely my own work.
	- Adam Sorrenti, #500903848
*/

/*
	Name: main()
	Purpose: Main entry point of the application.
	Parameters: void - no runtime arguments are provided.
	Return Values: The correct exit code based on the user input, 1 meaning a bad input occured.
	Input: int size which is the size of a vector from 1-9.
	Output: The final vector and its normalization.
*/
int main(void) 
{
    int size = MAXSIZE; // Defines the size of vector and sets it to a know value.
	int scan;// Defines the return value of the scanf func.
	double X[MAXSIZE]; // Defines the vector X.
	double normalizedX[MAXSIZE]; // Defines the normalized vector X.
	double N; // Defines the length of vector.
	int getVectRtn;// The return value of getVector() method
	int exitCode = 0; // Holds the final exit code with a default of 0.

    do 
	{
		scan = scanf("%d", &size); 
		if (scan == 1 && size > MINSIZE && size <= MAXSIZE)
		{
			getVectRtn = getVector(size, X);
			if (getVectRtn == 1)
			{
				N = getLength(X, size);
				if (N == 0) // handle if all elements are zero(div by zero would happen).
				{
					badInput();
					exitCode = 1;
				}
				else 
				{
					arrayCopy(X, normalizedX, size);
					normalizeVector(normalizedX, N, size);
					printVec(X, normalizedX, size);
					while ((getchar()) != '\n');
				}
			}
			else if (getVectRtn == 0)
			{
				badInput();
				exitCode = 1;
			}
			else //EOF
				exit(exitCode);
		}
		else if (scan == 0 || size < MINSIZE || size > MAXSIZE)
		{
			badInput();
			exitCode = 1;
		}
        else //size == 0 || or EOF
            exit(exitCode);
            
    } while(size != 0);
}