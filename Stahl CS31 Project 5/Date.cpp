// Date.cpp
#include <iostream>
#include <cassert>

#include "Date.h"

Date::Date(int month , int day) {
	mMonth = month;
	mDay = day;
}
int Date::getMonth()  {
	if ((mMonth >= 1) && (mMonth <= 12)) {
		return mMonth;
	}
	else {
		return(-1);
	}
}
int Date::getDay()  {
	if ((mDay >= 1) && (mDay <= 31)) {
		return mDay;
	}
	else {
		return(-1);
	}
}


//int main() {
//	Date someday1(1,1);
//	assert((someday1.getMonth()) == 1);
//	assert((someday1.getDay()) == 1);
//
//	Date someday2(2, 3);
//	assert((someday2.getMonth()) == 2);
//	assert((someday2.getDay()) == 3);
//
//	Date someday3(4, 5);
//	assert((someday3.getMonth()) == 4);
//	assert((someday3.getDay()) == 5);
//
//	Date someday4(6, 7);
//	assert((someday4.getMonth()) == 6);
//	assert((someday4.getDay()) == 7);
//	return (0);
//}