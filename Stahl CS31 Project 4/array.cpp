#include <iostream>
#include <string>
#include <cassert>

// std::string people[5] = { "samwell", "jon", "margaery", "daenerys", "tyrion" };
// std::string data[4] = { "howard", "ucla", "howard", "ucla" };

// Return the index of the smallest item found in the array or -1 if n <= 0.
// If there are multiple duplicate minimum values, please return the smallest index that has this smallest item.
// For example, for the array: std::people[5] shown above, locateMinimum( people, 5 ) should return the value 3, corresponding to the index of "daenerys".  
// If there are multiple duplicate minimum values, please return the smallest index that has this smallest item.
int locateMinimum(const std::string array[], int n);

// Return the largest index that holds the target value in the array or -1 if it is not found at all or n <= 0.  
// For example, for the array: std::string data[4] = { "howard", "ucla", "howard", "ucla" };     
// findLastOccurrence( data, 4, "howard" ) should return the value 2 while 
// findLastOccurrence( data, 4, "cs 31" ) should return -1. 
int findLastOccurrence(const std::string array[], int n, std::string target);

// If every value in the array is unique and unduplicated, return true otherwise false or if n < 0 return false.
// For example, for the array: std::people[5] shown above, hasNoDuplicates( people, 5) should return true.
// For example, for the array: std::people[5] shown above, hasNoDuplicates( people, 0) should return true because the empty array indeed has no duplicates either.
bool hasNoDuplicates(const std::string array[], int n);

// If every value in the array is larger than the one that precedes it, return true otherwise false or if n < 0 return false.
// For example, for the array: std::people[ 5 ] shown above, isInIncreasingOrder( people, 5 ) should return false.  
// When passed an array of size 0 or 1, isInIncreasingOrder( ... ) will return true, since the function will not find a pair of values that fail to meet the ordering criteria. 
bool isInIncreasingOrder(const std::string array[], int  n);

// Creates a new array by combining together all the items of array1 and array2, while ensuring that the new array has no duplicated values.
// If either n1 or n2 is less than or equal to zero, set the resultingSize to - 1.  
// For example, for the array: std::string data[4] = { "howard", "ucla", "howard", "ucla" };
// and the array: std::people[5] shown above, then
// unionWithNoDuplicates(people, 5, data, 4, result, size) should adjust the result array to hold the values{ "samwell", "jon", "margaery", "daenerys", "tyrion", "howard", "ucla" }; 
// and size should have the value 7.
// For example, unionWithNoDuplicates(data, 4, people, 3, result, size) should adjust the result array to hold the values{ "howard", "ucla", "samwell", "jon", "margaery" };
// and size should have the value 5.
// As the examples attempt to show, the elements coming from array1 should be listed before any elements coming from array2.  
// (Note: Please be sure that your driver code has allocated enough array memory for the resultingString array to hold all the elements that this function plans to store into it)
void unionWithNoDuplicates(const std::string array1[], int n1, const std::string array2[], int n2, std::string resultingString[], int& resultingSize);

// Adjust the items found in the array, 
// shifting each value to the right by amount parameter,
// filling the resulting first amount elements of the array with the placeholder parameter and
// returning the number of original array items still remaining in the array after all the shifting has been performed.
// For example, for the array: std::people[5] shown above, shiftRight( people, 5, 3, "foo" )
// should return 2 and adjust the array to have the value{ "foo", "foo", "foo", "samwell", "jon" };
// If the amount parameter is less than zero or exceeds n, return -1.
int shiftRight(std::string array[], int n, int amount, std::string placeholderToFillEmpties);

// Flips the items found in the array so that the first item holds what was originally found in the last item, the last item holds what was originally found in the first item, and so on throughout the array.
// The function should keep track of all the flips it performs and return that count.
// For example, for the array: std::people[ 5 ] shown above, flipAround( people, 5 ) should adjust the array so that it now holds { "tyrion", "daenerys", "margaery", "jon", "samwell" };
// and should return 2 (because it performed the flip of samwell and tyrion and the flip of jon and daenerys).
int flipAround(std::string array[], int n);

int main() {
	std::string a[6] = { "alpha", "beta", "gamma", "gamma", "beta", "delta" };
	std::string b[6] = { "delta", "gamma", "beta", "alpha", "beta", "alpha" };
	std::string h[7] = { "samwell", "jon", "margaery", "daenerys", "", "tyrion", "margaery" };

	std::string c[8] = { "aardvark", "aardvark", "baboon", "computer", "xylophone", "xylophone", "yes", "xenophobia" };

	std::string people[5] = { "samwell", "jon", "margaery", "daenerys", "tyrion" };
	std::string data[4] = { "howard", "ucla", "howard", "ucla" };

	std::string folks[8] = { "samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "howard", "cersei" };

	int answer;

	std::string output[6] = { " ", " ", " ", " ", " ", " " };
	int outputSize = 6;

	assert(locateMinimum(a, 3) == 0); // alpha is the minimal string and is at a[0]
	assert(locateMinimum(b, 3) == 2); // beta is the minimal string and is at b[2]

	assert(locateMinimum(c, 3) == 0); // aardvark is the minimal string and the smallest index it appears in is 0
	assert(locateMinimum(c, 8) == 0); // aardvark is the minimal string and the smallest index it appears in is 0
	assert(locateMinimum(c, -1) == -1); // returns -1 if n <= 0
	assert(locateMinimum(c, -1) == -1); // returns -1 if n <= 0
	//assert(locateMinimum(c, 9) == 0); // undefined behavior                    

	assert(locateMinimum(people, 5) == 3); // daenerys is the minimal string and is at people[3]                                

	
	assert(findLastOccurrence(a, 5, "beta") == 4); // beta is at the a[1] and at a[4] so 4 should be returned
	assert(findLastOccurrence(b, 3, "beta") == 2); // beta is at only the b[2] so the 2 position should be returned

	assert(findLastOccurrence(folks, 5, "howard") == -1); // should return -1 (not found)
	assert(findLastOccurrence(folks, 0, "howard") == -1); // should return -1 when n <= 0 
	assert(findLastOccurrence(c, -1, "howard") == -1); // should return -1 when n <= 0 
	//assert(findLastOccurrence(c, 9, "howard") == -1); // undefined behavior 
	assert(findLastOccurrence(c, 2, "aardvark") == 1); // aardvark is at the c[0] and c[1] positions so 1 should be returned

	assert(findLastOccurrence(data, 4, "howard") == 2); // howard occurs at data[0] and data[2] positions so 2 should be returned
	assert(findLastOccurrence(data, 4, "cs31") == -1); // should return -1 (not found)
	

	assert(hasNoDuplicates(a, 3) == true); // array a considering only the first 3 elements has no duplicates
	assert(hasNoDuplicates(b, 6) == false); // array b has several duplicates

	assert(hasNoDuplicates(c, 1) == true); // array c considering only the first element has no duplicates
	assert(hasNoDuplicates(c, 0) == true); // array c considering the empty array has no dubplicate elements
	assert(hasNoDuplicates(c, -1) == false); // should return false since n < 0

	assert(hasNoDuplicates(people, 5) == true); // array people has no duplicates
	assert(hasNoDuplicates(people, 0) == true); // array people considering the empty array has no duplicate elements
	

	assert(isInIncreasingOrder(a, 3) == true); // each element is lexicographically larger than the one before it in the first 3 elements of a
	assert(isInIncreasingOrder(a, 6) == false); // the last couple of elements in a aren't lexicographically ordered 

	assert(isInIncreasingOrder(c, 0) == true); // no pair of values exist that fail the criteria
	assert(isInIncreasingOrder(c, 1) == true); // no pair of values exist that fail the criteria
	assert(isInIncreasingOrder(c, 7) == true); // the first 7 elements of c are ordered lexicographically 
	assert(isInIncreasingOrder(c, 8) == false); // the last pair of elements are not lexicographically ordered

	assert(isInIncreasingOrder(people, 5) == false); // these elements are not in such an order
	

	//unionWithNoDuplicates(a, 6, b, 2, output, outputSize); // simple example to test 
	//assert(outputSize == 4);
	//assert(output[0] == "alpha");

	unionWithNoDuplicates(folks, 3, b, 2, output, outputSize); // simple example to test 
	assert(outputSize == 5);
	assert(output[0] == "samwell");

	

	//answer = shiftRight(h, 6, 1, "foobar");
	//assert(answer == 5);
	//assert(h[0] == "foobar");
	//std::cout << "-" << std::endl;

	//answer = shiftRight(people, 5, 3, "foo");
	//assert(answer == 2);
	//assert(people[2] == "foo");
	//assert(people[3] == "samwell");
	//std::cout << "-" << std::endl;

	//answer = shiftRight(folks, 3, 1, "poop");
	//assert(answer == 2);
	//assert(folks[0] == "poop");
	//assert(folks[1] == "samwell");
	//std::cout << "-" << std::endl;

	//assert(flipAround(people, 3) == 1);
	//std::cout << "-" << std::endl;
	//assert(flipAround(data, 4) == 2);
	//std::cout << "-" << std::endl;
	//
	//assert(flipAround(c, -1) == 0); // various cases to test
	//std::cout << "-" << std::endl;
	//assert(flipAround(b, 0) == 0);
	//std::cout << "-" << std::endl;
	//assert(flipAround(b, 1) == 0);
	//std::cout << "-" << std::endl;
	//assert(flipAround(c, 1) == 0);
	//std::cout << "-" << std::endl;
	//assert(flipAround(c, 2) == 1);
	//std::cout << "-" << std::endl;
	//assert(flipAround(c, 3) == 1);
	//std::cout << "-" << std::endl;
	//assert(flipAround(folks, 8) == 4);
	//std::cout << "-" << std::endl;

	std::cout << "-" << std::endl;
	std::cout << "All tests succeeded" << std::endl;
	return(0);
}

int locateMinimum(const std::string array[], int n) {
	int x;
	if (n <= 0) {
		x = -1; // checks if n is less than or equal to 0 and will return -1 accordingly
	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = 1; j < n; ++j) {
				if (array[i] <= array[j]) { //checks a single element of an array with multiple elements of the rest of the array using a double nested for loop
					x = i; // sets the minimum
					if (j + 1 == n) {
						i = n; // exits the loop once it's done checking the entire array
					}
				}
				else {
					j = j + 1; //if it's not the minimum, it moves on to the next item
					break;
				}
			}
		}
	}
	return (x);
}

int findLastOccurrence(const std::string array[], int n, std::string target) {
	int x;
	if (n <= 0) {
		x = -1; // checks if n is less than or equal to 0 and will return -1 accordingly
	}
	else {
		x = -1; // will return automatically if target string isn't found
		for (int i = 0; i < n; ++i) { 
			if (array[i] == target) { // scans through the area to find the target string
				x = i; // if found puts it in a variable
			}
		}
	}
	return(x);
}

bool hasNoDuplicates(const std::string array[], int  n) {
	int x;
	x = 1; // automatically returns 1 if nothing is wrong
	if (n < 0) {
		x = 0; // checks if n is less than 0 and will return -1 accordingly
	}
	if (n == 0) { // if it's the empty string then it has no duplicates
		return(x);
	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = i+1; j < n; ++j) {
				if (array[i] == array[j]) { // if any element of the array ever equals another element of the array...
					return(0); // ... immediately return 0
				}
			}
		}
	}
	return (x);
}

bool isInIncreasingOrder(const std::string array[], int  n) {
	int x;
	x = 1;
	if (n < 0) {
		x = 0; // checks if n is less than 0 and will return -1 accordingly
	}
	if (n == 0) {
		return(x);
	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (array[i] > array[j]) {
					return(0);
				}
			}
		}
	}
	return (x);
}

void unionWithNoDuplicates(const std::string array1[], int n1, const std::string array2[], int n2, std::string resultingString[], int& resultingSize) {
	if (n1 <= 0 || n2 <= 0) {
		resultingSize = -1; // error checking
	}
	else {
		resultingSize = 1; // initializing necessary variables
		int resultingStringindex = 1;
		int numberOfRepeats;
		
		resultingString[0] = array1[0];

		for (int i = 1; i < n1; i++) {
			numberOfRepeats = 0;
			for (int k = 0; k < resultingStringindex; k++) {
				if (array1[i] == resultingString[k]) {
					numberOfRepeats++;
				}
			}
			if (numberOfRepeats == 0) { // if there are no repeats add it to the resulting string
				resultingString[resultingStringindex] = array1[i];
				resultingStringindex++;
				resultingSize++; // increase the size accordingly
			}
		}
		for (int m = 0; m < n2; m++) { // repeat the same process for other array
			numberOfRepeats = 0;
			for (int w = 0; w < resultingStringindex; w++) {
				if (array2[m] == resultingString[w]) {
					++numberOfRepeats;
				}
			}
			if (numberOfRepeats == 0) {
				resultingString[resultingStringindex] = array2[m];
				resultingStringindex++;
				resultingSize++;
			}
		}
	}
	for (int i = 0; i < resultingSize; ++i) {
		std::cerr << resultingString[i] << " " << std::endl;
	}
	std::cerr << resultingSize << " " << std::endl;
}

int shiftRight(std::string array[], int n, int amount, std::string placeholderToFillEmpties) {
	if (n < 0) { // various cases where this function should not work
		return (-1);
	}
	if ((amount < 0) || (amount > n)) {
		return(-1);
	}
	if ((n == 0) && (amount == 0)) {
		return(-1);
	}
	for (int i = 0; i < n - 1; ++i) { // going through the array...
		array[n - 1 - i] = array[n - 1 - amount - i]; // ... from the back, let's us change values without affecting values for future changes
		if (n - 1 - amount - i == 0) // if I walk out of the array in the negative direction, I break out of the loop
			break;
	}
	for (int i = 0; i < amount; ++i) { // I then replace how so many ever indicated elements with the given placeholderToFillEmpties
		array[i] = placeholderToFillEmpties;
	}
	for (int i = 0; i < n; ++i) {
		std::cerr << array[i] << " ";
	}
	return(n - amount);
}

int flipAround(std::string array[], int n) {
	if (n <= 1) { // not a valid case
		return(0);
	}
	for (int i = 0; i < (n / 2); ++i) { // n/2 is the "middle" of the array, do not want to flip at the middle of the array or else will be double-counting
		std::string tmpStringInitial = array[i]; // saves part of the array so we don't lose it making changes
		array[i] = array[n -1 -i]; // changes the first half of the array
		array[n -1 -i] = tmpStringInitial; // changes the latter half
	}
	for (int i = 0; i < n; ++i) {
		std::cerr << array[i] << " " ;
	}
	return (n / 2);
}