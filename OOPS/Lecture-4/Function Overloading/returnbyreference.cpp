// C++ program to illustrate return 
// by reference 
#include <iostream> 
using namespace std; 

// Global variable 
int x; 

// Function returns as a return 
// by reference 
int& retByRef() 
{ 
	return x; 
} 

// Driver Code 
int main() 
{ 
	// Function Call for return 
	// by reference 
	retByRef() = 10; 

	// Print X 
	cout << x; 
	return 0; 
} 

// Return type of the above function retByRef() is a reference of the variable x so value 10 will be assigned into the x.

