#include <iostream>

int main() {
	int* p1 = new int[10];
	std::cout << "int* p1 = new int[10];" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p1" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << (p1 + i) << "  " << *(p1 + i) << std::endl;
	}
	std::cout << " " << std::endl;

	int* p2[15];
	std::cout << "int* p2[15];" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p2" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 15; ++i) {
		std::cout << (p2 + i) << "  " << *(p2 + i) << std::endl;
	}
	std::cout << " " << std::endl;

	for (int i = 0; i < 15; i++) {
		p2[i] = new int[5];
	}

	std::cout << "for (int i = 0; i < 15; i++) " << std::endl;
	std::cout << "{ p2[i] = new int[5]; }" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p2 (after for loop)" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 15; ++i) {
		std::cout << (p2 + i) << "  " << *(p2 + i) << std::endl;
	}
	std::cout << " " << std::endl;


	int* *p3 = new int*[5];
	std::cout << "int* *p3 = new int*[5];" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p3" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << (p3 + i) << "  " << *(p3 + i) << std::endl;
	}
	std::cout << " " << std::endl;

	for (int i = 0; i <5; ++i)
	{ p3[i] = new int; }
	std::cout << "for (int i = 0; i <5; ++i)" << std::endl;
	std::cout << "{ p3[i] = new int; }" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p3 (after for loop)" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << (p3 + i) << "  " << *(p3 + i) << std::endl;
	}
	std::cout << " " << std::endl;

	int* p4 = new int;
	std::cout << "int* p4 = new int;" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p4" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 1; ++i) {
		std::cout << (p4 + i) << "  " << *(p4 + i) << std::endl;
	}
	std::cout << " " << std::endl;

	int* temp = p4;
	std::cout << "int* temp = p4;" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out temp" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 1; ++i) {
		std::cout << (temp + i) << "  " << *(temp + i) << std::endl;
	}
	std::cout << " " << std::endl;
	
	p4 = p1;
	std::cout << "int* temp = p4;" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out temp" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 1; ++i) {
		std::cout << (temp + i) << "  " << *(temp + i) << std::endl;
	}
	std::cout << " " << std::endl;
	
	p1 = temp;
	std::cout << "p1 = temp;" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "printing out p1" << std::endl;
	std::cout << "ADDRESS:  VALUE: " << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << (p1 + i) << "  " << *(p1 + i) << std::endl;
	}
	std::cout << " " << std::endl;

	delete p1;

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}

	delete[] p3;

	for (int i = 0; i < 15; i++) {
		delete[] p2[i];
	}

	delete[] p4;
	return (0);
}
