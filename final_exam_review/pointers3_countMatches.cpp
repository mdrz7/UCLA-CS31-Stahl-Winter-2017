#include <iostream>

void countMatches(const char *str1, const char *str2, int &count);

int main() {
	char* str1 = "vinay";
	char* str2 = "vinyard";
	int count;
	countMatches(str1, str2, count);
	std::cout << "Count should be 3 and when calculated, turns out to be " << count << " which is correct." << std::endl;
	return (0);
}

void countMatches(const char *str1, const char *str2, int &count) {
	count = 0;
	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 == *str2) {
			++count;
			++str1;
			++str2;
		}
		else {
			// do nothing but advance
			++str1;
			++str2;
		}
	}
}
