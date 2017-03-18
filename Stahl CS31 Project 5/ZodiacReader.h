#pragma once
//#ifndef ZodiacReader.h
//#define ZodiacReader.h
//

#include <string>

#include "Date.h"

// ZodiacReader.h
class ZodiacReader {
private:
	Date mDate;
public:
	ZodiacReader(Date date);
	
	enum Sign {
		ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES,
	};

	ZodiacReader::Sign checkSign();
	bool onCusp();
	ZodiacReader::Sign cuspSign();
	std::string stringifySign(ZodiacReader::Sign sign);
};

//#endif