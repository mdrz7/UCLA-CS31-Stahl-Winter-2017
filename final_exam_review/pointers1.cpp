#include <iostream>

int main() {
	
	int a[10];
	std::cout << " int a[10]; " << std::endl;
	std::cout << "array a: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &a[i] << " , " << a[i] << std::endl;
	}
	
	int* b = a;
	std::cout << " int* b = a; " << std::endl;
	std::cout << "array b: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &b[i] << " , " << b[i] << std::endl;
	}
	
	*a = 5;
	std::cout << " *a = 5; " << std::endl;
	std::cout << "array a: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &a[i] << " , " << a[i] << std::endl;
	}
	std::cout << "array b: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &b[i] << " , " << b[i] << std::endl;
	}
	
	*(a + 1) = (*a) + 90;
	std::cout << " *(a + 1) = (*a) + 1; " << std::endl;
	std::cout << "array a: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &a[i] << " , " << a[i] << std::endl;
	}
	std::cout << "array b: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &b[i] << " , " << b[i] << std::endl;
	}
	
	std::cout << " (*b)++ " << std::endl; // will dereference and then increment
	std::cout << (*b)++ << std::endl;
	std::cout << "array b: address and value" << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << &b[i] << " , " << b[i] << std::endl;
	}

	//std::cout << " (*--b) " << std::endl;
	//std::cout << (*--b) << std::endl;

	return (0);
}
