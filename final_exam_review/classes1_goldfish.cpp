#include <iostream>

class Goldfish {
private:
	char *m_memory; // Pointer to memory.
	int m_amount; // # of chars remembered.
	int m_capacity; // # of chars this fish can remember.
public:
	Goldfish(int capacity);
	~Goldfish();
	void remember(char c);
	void forget(); // Clears m_memory using dots('.')
	void printMemory() const; // Prints the content of m_memory

};
int main() {
	Goldfish nemo(3);
	nemo.printMemory(); // prints "..."
	nemo.remember('a');
	nemo.printMemory(); // prints "a.. "
	nemo.remember('b');
	nemo.printMemory(); // prints "ab."
	nemo.remember('c');
	nemo.printMemory(); // prints "abc"
	nemo.remember('d');
	nemo.printMemory(); // prints "bcd"
	nemo.forget();
	nemo.printMemory(); // prints "..."
	// nemo.~Goldfish();
	// ** Error in `./a.out': double free or corruption (fasttop): 0x0000000001b71010 ***
	// Aborted(core dumped)
	// avoid using the destructor
	nemo.printMemory();
	std::cout << " " << std::endl;

	std::cout << "done" << std::endl;
	return (0);
}


Goldfish::Goldfish(int capacity) {
	if (capacity < 1) {
		m_capacity = 3;
	}
	else {
		m_capacity = capacity;
	}
	m_memory = new char[m_capacity];
	m_amount = 0;
	forget();
}

void Goldfish::remember(char c) {
	if (m_capacity > m_amount) {
		m_memory[m_amount] = c;
		++m_amount;
	}
	else if (m_capacity == m_amount) {
		for (int i = 0; i < (m_capacity - 1); ++i) {
			m_memory[i] = m_memory[i + 1];
		}
		m_amount--;
		std::cout << "m_amount has decremented" << std::endl;
		m_memory[m_amount] = c;
		m_amount++;
		std::cout << "m_amount has incremented" << std::endl;
	}
	else {
		m_amount = m_capacity;
		std::cout << "You had one messed up fish there, memory will be forgotten." << std::endl;
		forget();
	}
}

void Goldfish::forget() {
	for (int i = 0; i < m_capacity; ++i) {
		m_memory[i] = '.';
	}
	m_amount = 0;
}

Goldfish::~Goldfish() {
	forget();
	delete[] m_memory;
}

void Goldfish::printMemory() const {
	std::cout << "~~~~~~~~~~" << std::endl;
	for (int i = 0; i < m_capacity; ++i) {
		std::cout << m_memory[i] << std::endl;
	}
	std::cout << "The m_amount is " << m_amount << std::endl;
	std::cout << "The m_capacity is " << m_capacity << std::endl;
	std::cout << " " << std::endl;
}
