#include <iostream>
#include <string>

int main() {
	// This section of code declares the neccessary variables that are to be used in the next section, mainly for requesting inputs.
	std::string customerName; 
	double milesToBeDriven;
	double minutesToBeDriven;
	std::string rideType;
	
	// This section of code asks for all the required inputs of the program such as the name of the customer, miles to be driven, etc.
	// cin.ignore will be used to clear the buffer of return carriages so that the next cin can be run.
	std::cout << "Customer Name: "; 
	std::getline (std::cin, customerName);
	std::cout << "Miles to be driven: " ;
	std::cin >> milesToBeDriven;
	std::cout << "Minutes to be driven: " ;
	std::cin >> minutesToBeDriven;
	std::cin.ignore();
	std::cout << "Ride Type: ";
	std::getline(std::cin, rideType);
	
	// This section of code delcares the neccessary variables and constants needed for calculating the fare. 
	// The final fare will be stored in tmpfare.
	const double cpmileX = 0.90; 
	const double cpmileXL = 1.55;
	const double cpminX = 0.15;
	const double cpminXL = 0.30;
	const double bkfee = 1.65;
	const double minfareX = 5.15;
	const double minfareXL = 7.65;
	double tmpfare;

	// This is the bulk of the program: the fare will only be calculated if the miles to be driven is positive, the minutes to be driven is positive, if the custimer enteres a nonempty string, and if they enter one of the two valid ride types.
	// Note that the precision is set to 2 so that the anwer will come out as a monetary value.
	// The various if conditions determine the correctness of the inputs and will only determine a fare if all of the inputs meet the required condtions.
	// Otherwise, the code prompts the user with an error message and exits.
	// 0.001 is added to fix any rounding issues associated with storing numbers in double type variables.
	if (milesToBeDriven > 0) {
		if (minutesToBeDriven > 0) {
			if (customerName != "") {
				if (rideType == "Br-UberX") {
					tmpfare = (cpmileX * milesToBeDriven) + (cpminX * minutesToBeDriven) + bkfee +  0.001;
					if (tmpfare > minfareX) {
						std::cout.precision(2);
						std::cout << std::fixed;
						std::cout << "--- The fare for " << customerName << " is $" << tmpfare << std::endl;
					}
					else {
						std::cout << "--- The fare for " << customerName << " is $" << minfareX << std::endl;
					}
				}
				else if (rideType == "Br-UberXL") {
					tmpfare = (cpmileXL * milesToBeDriven) + (cpminXL * minutesToBeDriven) + bkfee + 0.001;
					if (tmpfare > minfareXL) {
						std::cout.precision(2);
						std::cout << std::fixed;
						std::cout << "--- The fare for " << customerName << " is $" << tmpfare << std::endl;
					}
					else {
						std::cout << "--- The fare for " << customerName << " is $" << minfareXL << std::endl;
					}
				}
				else {
					std::cout << "--- The ride type is not valid." << std::endl;
				}
			}
			else {
				std::cout << "--- You must enter a customer name." << std::endl;
			}
		}
		else {
			std::cout << "--- The time must be positive." << std::endl;
		}
	}
	else {
		std::cout << "--- The mileage must be positive." << std::endl;
	}
return 0;
}