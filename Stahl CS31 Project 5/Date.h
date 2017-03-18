#pragma once
//#ifndef Date.h
//#define Date.h
//

// Date.h
class Date {
private:
	int mMonth; // private variables 
	int mDay;
public:
	Date(int month = 1 , int day = 1); // constructor
	int getMonth(); // public member functions
	int getDay();
};

//#endif