#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "assign2funcs.h"

//Please check assign2funcs.c for further documentation. 

/*
	Defines a function that outputs "BAD INPUT to stderr and clears buffer."
*/
void badInput()
{
	fprintf(stderr, "BAD INPUT\n");
	int c; // The getchar() return value
	while ((c = getchar()) != '\n' && c != EOF); //clears all remaining chararcters from the scanf buffer.
}

/*
	Defines a function that constructs a double X[] based on user input given a valid size.
*/
int getVector(int size, double X[])
{
	double currentInput = 0.0; // the current user input
	int i; // the index counter
	for (i = 0; i < size && scanf("%lf", &currentInput) == 1; i++)
	{
		X[i] = currentInput;
	}
	if (i != size)
		return(0);
	return(1);
}

/*
	Defines a function that returns the length of a given vector as defined by X's length,
	N, is defined as: N=sqrt(v1**2 + v2**2 + ... + vn**2), where "x**2" denotes x squared.
*/
double getLength(double X[], int size)
{
    double N = 0;//the length of the current vector.
    for(int i = 0; i < size; i++)
    {
        N += pow(X[i], 2);
    }
    return sqrt(N);
}

/*
	Makes a copy for the X vector for normalization.
*/
void arrayCopy(double X[], double normalizedX[], int size)
{
	for (int i = 0; i < size; i++)
		normalizedX[i] = X[i];
}

/*
	Makes a copy for the X vector for normalization.
*/
void normalizeVector(double normalizedX[], double N, int size)
{
	double current; // the current un-normalized element of the vector
    for(int i = 0; i < size; i++)
    {
		current = normalizedX[i];
		normalizedX[i] = current/N;
    }
}

/*
	Prints the final vectors in the required form to stdout.
*/
void printVec(double X[], double normalizedX[], int size)
{
	double current; // Defines the current element of a vector.
	printf("VECTOR: [ ");
	for (int i = 0; i < size; i++)
	{
		current = X[i];
		printf("%.3lf ", current);
	}
	printf("] NORMALIZED: [ ");
	for (int i = 0; i < size; i++)
	{
		current = normalizedX[i];
		printf("%.3lf ", current);
	}
	printf("]\n");
}