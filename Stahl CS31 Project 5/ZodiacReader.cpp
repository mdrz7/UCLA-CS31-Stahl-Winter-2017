// ZodiacReader.cpp
#include <string>
#include <iostream>

#include "Date.h"
#include "ZodiacReader.h"


ZodiacReader::ZodiacReader (Date date) {
	mDate = date;
}

// This method should return a Sign for the Date supplied at constructor-time.
ZodiacReader::Sign ZodiacReader::checkSign() {
	
	int gotDAY = mDate.getDay();
	int gotMONTH = mDate.getMonth();
	

	if (((gotMONTH == 3) && (gotDAY >= 21)) || ((gotMONTH == 4) && (gotDAY <= 19))) {
		return(ZodiacReader::ARIES);
	}
	else if (((gotMONTH == 4) && (gotDAY >= 20)) || ((gotMONTH == 5) && (gotDAY <= 20))) {
		return(ZodiacReader::TAURUS);
	}
	else if (((gotMONTH == 5) && (gotDAY >= 21)) || ((gotMONTH == 6) && (gotDAY <= 20))) {
		return(ZodiacReader::GEMINI);
	}
	else if (((gotMONTH == 6) && (gotDAY >= 21)) || ((gotMONTH == 7) && (gotDAY <= 22))) {
		return(ZodiacReader::CANCER);
	}
	else if (((gotMONTH == 7) && (gotDAY >= 23)) || ((gotMONTH == 8) && (gotDAY <= 22))) {
		return(ZodiacReader::LEO);
	}
	else if (((gotMONTH == 8) && (gotDAY >= 23)) || ((gotMONTH == 9) && (gotDAY <= 22))) {
		return(ZodiacReader::VIRGO);
	}
	else if (((gotMONTH == 9) && (gotDAY >= 23)) || ((gotMONTH == 10) && (gotDAY <= 22))) {
		return(ZodiacReader::LIBRA);
	}
	else if (((gotMONTH == 10) && (gotDAY >= 23)) || ((gotMONTH == 11) && (gotDAY <= 21))) {
		return(ZodiacReader::SCORPIO);
	}
	else if (((gotMONTH == 11) && (gotDAY >= 22)) || ((gotMONTH == 12) && (gotDAY <= 21))) {
		return(ZodiacReader::SAGITTARIUS);
	}
	else if (((gotMONTH == 12) && (gotDAY >= 22)) || ((gotMONTH == 1) && (gotDAY <= 19))) {
		return(ZodiacReader::CAPRICORN);
	}
	else if (((gotMONTH == 1) && (gotDAY >= 20)) || ((gotMONTH == 2) && (gotDAY <= 18))) {
		return(ZodiacReader::AQUARIUS);
	}
	else if (((gotMONTH == 2) && (gotDAY >= 19)) || ((gotMONTH == 3) && (gotDAY <= 20))) {
			return(ZodiacReader::PISCES);
	}
	else {
		return(ZodiacReader::ARIES);
	}
}

// This method should return true if the Date supplied at constructor-time is "on the cusp" of a second astrological sign, false otherwise.
// A Date one day before or one day after the start or stop of a sign is deemed to be "on the cusp."
// Being born on the exact day the sign starts or stops also means you are "on the cusp."
bool ZodiacReader::onCusp() {
	if ((mDate.getMonth() == 1) && (mDate.getDay() >= 18 && mDate.getDay() <= 21)) {
		return (true);
	}
	else if ((mDate.getMonth() == 2) && (mDate.getDay() >= 17 && mDate.getDay() <= 20)) {
		return (true);
	}
	else if ((mDate.getMonth() == 3) && (mDate.getDay() >= 19 && mDate.getDay() <= 22)) {
		return (true);
	}
	else if ((mDate.getMonth() == 4) && (mDate.getDay() >= 18 && mDate.getDay() <= 21)) {
		return (true);
	}
	else if ((mDate.getMonth() == 5) && (mDate.getDay() >= 19 && mDate.getDay() <= 22)) {
		return (true);
	}
	else if ((mDate.getMonth() == 6) && (mDate.getDay() >= 19 && mDate.getDay() <= 22)) {
		return (true);
	}
	else if ((mDate.getMonth() == 7) && (mDate.getDay() >= 21 && mDate.getDay() <= 24)) {
		return (true);
	}
	else if ((mDate.getMonth() == 8) && (mDate.getDay() >= 21 && mDate.getDay() <= 24)) {
		return (true);
	}
	else if ((mDate.getMonth() == 9) && (mDate.getDay() >= 21 && mDate.getDay() <= 24)) {
		return (true);
	}
	else if ((mDate.getMonth() == 10) && (mDate.getDay() >= 21 && mDate.getDay() <= 24)) {
		return (true);
	}
	else if ((mDate.getMonth() == 11) && (mDate.getDay() >= 20 && mDate.getDay() <= 23)) {
		return (true);
	}
	else if ((mDate.getMonth() == 12) && (mDate.getDay() >= 20 && mDate.getDay() <= 23)) {
		return (true);
	}
	else {
		return (false);
	}
}


ZodiacReader::Sign ZodiacReader::cuspSign() {
	if (onCusp()) {
		if ((mDate.getMonth() == 1) && (ZodiacReader::checkSign() == ZodiacReader::CAPRICORN)) {
			return (ZodiacReader::AQUARIUS);
		}
		else if ((mDate.getMonth() == 1) && (ZodiacReader::checkSign() == ZodiacReader::AQUARIUS)) {
			return (ZodiacReader::CAPRICORN);
		}
		else if ((mDate.getMonth() == 2) && (ZodiacReader::checkSign() == ZodiacReader::AQUARIUS)) {
			return (ZodiacReader::PISCES);
		}
		else if ((mDate.getMonth() == 2) && (ZodiacReader::checkSign() == ZodiacReader::PISCES)) {
			return (ZodiacReader::AQUARIUS);
		}
		else if ((mDate.getMonth() == 3) && (ZodiacReader::checkSign() == ZodiacReader::PISCES)) {
			return (ZodiacReader::ARIES);
		}
		else if ((mDate.getMonth() == 3) && (ZodiacReader::checkSign() == ZodiacReader::ARIES)) {
			return (ZodiacReader::PISCES);
		}
		else if ((mDate.getMonth() == 4) && (ZodiacReader::checkSign() == ZodiacReader::ARIES)) {
			return (ZodiacReader::TAURUS);
		}
		else if ((mDate.getMonth() == 4) && (ZodiacReader::checkSign() == ZodiacReader::TAURUS)) {
			return (ZodiacReader::ARIES);
		}
		else if ((mDate.getMonth() == 5) && (ZodiacReader::checkSign() == ZodiacReader::TAURUS)) {
			return (ZodiacReader::GEMINI);
		}
		else if ((mDate.getMonth() == 5) && (ZodiacReader::checkSign() == ZodiacReader::GEMINI)) {
			return (ZodiacReader::TAURUS);
		}
		else if ((mDate.getMonth() == 6) && (ZodiacReader::checkSign() == ZodiacReader::GEMINI)) {
			return (ZodiacReader::CANCER);
		}
		else if ((mDate.getMonth() == 6) && (ZodiacReader::checkSign() == ZodiacReader::CANCER)) {
			return (ZodiacReader::GEMINI);
		}
		else if ((mDate.getMonth() == 7) && (ZodiacReader::checkSign() == ZodiacReader::CANCER)) {
			return (ZodiacReader::LEO);
		}
		else if ((mDate.getMonth() == 7) && (ZodiacReader::checkSign() == ZodiacReader::LEO)) {
			return (ZodiacReader::CANCER);
		}
		else if ((mDate.getMonth() == 8) && (ZodiacReader::checkSign() == ZodiacReader::LEO)) {
			return (ZodiacReader::VIRGO);
		}
		else if ((mDate.getMonth() == 8) && (ZodiacReader::checkSign() == ZodiacReader::VIRGO)) {
			return (ZodiacReader::LEO);
		}
		else if ((mDate.getMonth() == 9) && (ZodiacReader::checkSign() == ZodiacReader::VIRGO)) {
			return (ZodiacReader::LIBRA);
		}
		else if ((mDate.getMonth() == 9) && (ZodiacReader::checkSign() == ZodiacReader::LIBRA)) {
			return (ZodiacReader::VIRGO);
		}
		else if ((mDate.getMonth() == 10) && (ZodiacReader::checkSign() == ZodiacReader::LIBRA)) {
			return (ZodiacReader::SCORPIO);
		}
		else if ((mDate.getMonth() == 10) && (ZodiacReader::checkSign() == ZodiacReader::SCORPIO)) {
			return (ZodiacReader::LIBRA);
		}
		else if ((mDate.getMonth() == 11) && (ZodiacReader::checkSign() == ZodiacReader::SCORPIO)) {
			return (ZodiacReader::SAGITTARIUS);
		}
		else if ((mDate.getMonth() == 11) && (ZodiacReader::checkSign() == ZodiacReader::SAGITTARIUS)) {
			return (ZodiacReader::SCORPIO);
		}
		else if ((mDate.getMonth() == 12) && (ZodiacReader::checkSign() == ZodiacReader::SAGITTARIUS)) {
			return ZodiacReader::CAPRICORN;
		}
		else if ((mDate.getMonth() == 12) && (ZodiacReader::checkSign() == ZodiacReader::CAPRICORN)) {
			return (ZodiacReader::SAGITTARIUS);
		}
		else {
			return (ZodiacReader::ARIES);
		}
	}
	else {
		return (ZodiacReader::ARIES);
	}
}
	
// This method should return a string that corresponds exactly to one of those listed below, depending on the value of the passed Sign parameter. 
// Aries Taurus Gemini Cancer Leo Virgo Libra Scorpio Sagittarius Capricorn Aquarius Pisces
std::string ZodiacReader::stringifySign(ZodiacReader::Sign sign) {
		
	std::string signString = "ARIES";

	switch (sign) {
	case ZodiacReader::ARIES:
		signString = "Aries";
		break;
	case ZodiacReader::TAURUS:
		signString = "Taurus";
		break;
	case ZodiacReader::GEMINI:
		signString = "Gemini";
		break;
	case ZodiacReader::CANCER:
		signString = "Cancer";
		break;
	case ZodiacReader::LEO:
		signString = "Leo";
		break;
	case ZodiacReader::VIRGO:
		signString = "Virgo";
		break;
	case ZodiacReader::LIBRA:
		signString = "Libra";
		break;
	case ZodiacReader::SCORPIO:
		signString = "Scorpio";
		break;
	case ZodiacReader::SAGITTARIUS:
		signString = "Sagittarius";
		break;
	case ZodiacReader::CAPRICORN:
		signString = "Capricorn";
		break;
	case ZodiacReader::AQUARIUS:
		signString = "Aquarius";
		break;
	case ZodiacReader::PISCES:
		signString = "Pisces";
		break;
	}
	return (signString);
}