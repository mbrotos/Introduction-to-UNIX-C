/*
	Name: badInput()
	Purpose: Prints "BAD INPUT\n" to standard error before clearing any other current user inputs.
	Parameters: void - no parameters are given.
	Return Values: void - no return values are sent.
	Input: void - no input is required.
	Output: the string "BAD INPUT\n" is outputted to stderr.
*/
void badInput();

/*
	Name: getVector()
	Purpose: Gets and stores user inputted vector elements.
	Parameters: int size - The user inputted size from 1-9, double X[] - A reference to a double array defined in main.
	Return Values: 0 - If a bad input was entered while collecting vector elements. 1 - If all elements were successfully obtained.
	Input: double currentInput - From the user for each element in the user defined size from 1-9.
	Output: No output is sent from this function.
*/
int getVector(int size, double X[]);

/*
	Name: getLength()
	Purpose: length of a given vector defined as: N=sqrt(v1**2 + v2**2 + ... + vn**2), where "x**2" denotes x squared.
	Parameters: double X[] - A reference to user inputted vector elements, int size - the user inputted vector size.
	Return Values: Returns the length the the vector N.
	Input: No input.
	Output: No output.
*/
double getLength(double X[], int size);

/*
	Name: arrayCopy()
	Purpose: Makes a copy of a given array into another one for normalization.
	Parameters: double X[] - A user inputted vector, double normalized[] - An empty array of MAXSIZE, int size - The user inputted vector size.
	Return Values: Nothing is returned because changes are only made to memory references.
	Input: No input.
	Output: No output.
*/
void arrayCopy(double X[], double normalizedX[], int size);

/*
	Name: normalizeVector()
	Purpose: Calculates X normalized is defined as: [v1/N, v2/N, ... vn/N].
	Parameters: double X[] - User inputted vector, double N - Vector length calculated by getLength(), int size - Vector size. 
	Return Values: No return values because only references are changed.
	Input: No input.
	Output: No output.
*/
void normalizeVector(double X[], double N, int size);

/*
	Name: printVec()
	Purpose: Prints the final vectors in the required form to stdout.
	Parameters: double X[] - User inputted vector, double normalizedX[] - The norm of a user inputted vector, int size - User inputted size.
	Return Values: No return value.
	Input: No input.
	Output: The user inputted vector followed by the norm in the require format is outputted to stdout.
*/
void printVec(double X[], double normalizedX[], int size);

