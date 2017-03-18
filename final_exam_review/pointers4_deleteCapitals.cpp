// Write a function named deleteCapitals that accepts one character pointer as a parameter and returns no value.
// The parameter must be a C-string.  
// This function must remove all of the upper case letters from the string.  
// The resulting string must be a valid C-string.

// Your function must declare no more than one local variable in addition to the parameter; that additional variable must be of a pointer type.
// Your function must not use any square brackets and must not use the strlen or strcpy library functions.

#include <iostream>

void deleteCapitals(char* msg);

int main()
{
	char msg[100] = "Happy Days Are Here Again!";
	deleteCapitals(msg);
	std::cout << msg << std::endl;        // prints:   appy ays re ere gain!
}

void deleteCapitals(char* msg) {
	char* ptr = msg;
	while (*msg != '\0') {
		if ((*msg < 'A') || (*msg > 'Z')) {
			*ptr = *msg;
			ptr++;
			msg++;
		}
		else {
			msg++;
		}
	}
	*ptr = '\0';
}
