#include <iostream>
#include <string>
#include <cassert>

#include "Date.h"
#include "ZodiacReader.h"

int main() {
		Date NEWYEAR(1, 1);
		ZodiacReader reader(NEWYEAR);
		assert(reader.checkSign() == ZodiacReader::CAPRICORN);
		assert(reader.stringifySign(reader.checkSign()) == "Capricorn");
		assert(!reader.onCusp());

		Date halloween(10, 25);
		ZodiacReader reader56(halloween);
		assert(reader56.checkSign() == ZodiacReader::SCORPIO);
		assert(reader56.stringifySign(reader56.checkSign()) == "Scorpio");
		assert(!reader56.onCusp());
		assert(reader56.cuspSign() == ZodiacReader::ARIES);
		std::cout << "all tests passed!" << std::endl;

		Date eleven_nineteen(11, 19);
		ZodiacReader reader57(eleven_nineteen);
		assert(reader57.checkSign() == ZodiacReader::SCORPIO);
		assert(reader57.stringifySign(reader57.checkSign()) == "Scorpio");
		assert(!reader57.onCusp());
		assert(reader57.cuspSign() == ZodiacReader::ARIES);

		Date nov20(11, 20);
		ZodiacReader reader58(nov20);
		assert(reader58.checkSign() == ZodiacReader::SCORPIO);
		assert(reader58.stringifySign(reader58.checkSign()) == "Scorpio");
		assert(reader58.onCusp());
		assert(reader58.cuspSign() == ZodiacReader::SAGITTARIUS);

		Date nov21(11, 21);
		ZodiacReader reader59(nov20);
		assert(reader59.checkSign() == ZodiacReader::SCORPIO);
		assert(reader59.stringifySign(reader59.checkSign()) == "Scorpio");
		assert(reader59.onCusp());
		assert(reader59.cuspSign() == ZodiacReader::SAGITTARIUS);

		Date nov22(11, 22);
		ZodiacReader reader60(nov22);
		assert(reader60.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader60.stringifySign(reader60.checkSign()) == "Sagittarius");
		assert(reader60.onCusp());
		assert(reader60.cuspSign() == ZodiacReader::SCORPIO);

		Date nov23(11, 23);
		ZodiacReader reader61(nov23);
		assert(reader61.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader61.stringifySign(reader61.checkSign()) == "Sagittarius");
		assert(reader61.onCusp());
		assert(reader61.cuspSign() == ZodiacReader::SCORPIO);

		Date nov24(11, 24);
		ZodiacReader reader62(nov24);
		assert(reader62.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader62.stringifySign(reader62.checkSign()) == "Sagittarius");
		assert(!reader62.onCusp());
		assert(reader62.cuspSign() == ZodiacReader::ARIES);

		Date dec19(12, 19);
		ZodiacReader reader63(dec19);
		assert(reader63.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader63.stringifySign(reader62.checkSign()) == "Sagittarius");
		assert(!reader63.onCusp());
		assert(reader63.cuspSign() == ZodiacReader::ARIES);

		Date dec20(12, 20);
		ZodiacReader reader64(dec20);
		assert(reader64.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader64.stringifySign(reader64.checkSign()) == "Sagittarius");
		assert(reader64.onCusp());
		assert(reader64.cuspSign() == ZodiacReader::CAPRICORN);

		Date dec21(12, 21);
		ZodiacReader reader65(dec21);
		assert(reader65.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader65.stringifySign(reader65.checkSign()) == "Sagittarius");
		assert(reader65.onCusp());
		assert(reader65.cuspSign() == ZodiacReader::CAPRICORN);

		Date jan20(1, 20);
		ZodiacReader reader1(jan20);
		assert(reader1.stringifySign(reader1.checkSign()) == "Aquarius");
		assert(reader1.checkSign() == ZodiacReader::AQUARIUS);
		assert(reader1.onCusp());
		assert(reader1.stringifySign(reader1.cuspSign()) == "Capricorn");
		assert(reader1.cuspSign() == ZodiacReader::CAPRICORN);
		
		Date jan21(1, 21);
		ZodiacReader reader2(jan21);
		assert(reader2.stringifySign(reader2.checkSign()) == "Aquarius");
		assert(reader2.checkSign() == ZodiacReader::AQUARIUS);
		assert(reader2.onCusp());
		assert(reader2.stringifySign(reader2.cuspSign()) == "Capricorn");
		assert(reader2.cuspSign() == ZodiacReader::CAPRICORN);
		Date jan19(1, 19);
		ZodiacReader reader3(jan19);
		assert(reader3.stringifySign(reader3.checkSign()) == "Capricorn");
		assert(reader3.checkSign() == ZodiacReader::CAPRICORN);
		assert(reader3.onCusp());
		assert(reader3.stringifySign(reader3.cuspSign()) == "Aquarius");
		assert(reader3.cuspSign() == ZodiacReader::AQUARIUS);
		
		Date feb18(2, 18);
		ZodiacReader reader4(feb18);
		assert(reader4.stringifySign(reader4.checkSign()) == "Aquarius");
		assert(reader4.checkSign() == ZodiacReader::AQUARIUS);
		assert(reader4.onCusp());
		assert(reader4.stringifySign(reader4.cuspSign()) == "Pisces");
		assert(reader4.cuspSign() == ZodiacReader::PISCES);
		
		Date feb17(2, 17);
		ZodiacReader reader5(feb17);
		assert(reader5.stringifySign(reader5.checkSign()) == "Aquarius");
		assert(reader5.checkSign() == ZodiacReader::AQUARIUS);
		assert(reader5.onCusp());
		assert(reader5.stringifySign(reader5.cuspSign()) == "Pisces");
		assert(reader5.cuspSign() == ZodiacReader::PISCES);
		
		Date feb19(2, 19);
		ZodiacReader reader6(feb19);
		assert(reader6.stringifySign(reader6.checkSign()) == "Pisces");
		assert(reader6.checkSign() == ZodiacReader::PISCES);
		assert(reader6.onCusp());
		assert(reader6.stringifySign(reader6.cuspSign()) == "Aquarius");
		assert(reader6.cuspSign() == ZodiacReader::AQUARIUS);

		Date december1(12, 1);
		ZodiacReader reader21(december1);
		assert(reader21.checkSign() == ZodiacReader::SAGITTARIUS);
		assert(reader21.stringifySign(reader21.checkSign()) == "Sagittarius");
		assert(!reader21.onCusp());
		assert(reader21.cuspSign() == ZodiacReader::ARIES);

		Date december22(12, 22);
		ZodiacReader reader22(december22);
		assert(reader22.checkSign() == ZodiacReader::CAPRICORN);
		assert(reader22.stringifySign(reader22.checkSign()) == "Capricorn");
		assert(reader22.onCusp());
		assert(reader22.cuspSign() == ZodiacReader::SAGITTARIUS);

		Date december23(12, 23);
		ZodiacReader reader23(december23);
		assert(reader23.checkSign() == ZodiacReader::CAPRICORN);
		assert(reader23.stringifySign(reader23.checkSign()) == "Capricorn");
		assert(reader23.onCusp());
		assert(reader23.cuspSign() == ZodiacReader::SAGITTARIUS);

		Date december25(12, 25);
		ZodiacReader reader24(december25);
		assert(reader24.checkSign() == ZodiacReader::CAPRICORN);
		assert(reader24.stringifySign(reader24.checkSign()) == "Capricorn");
		assert(!reader24.onCusp());
		assert(reader24.cuspSign() == ZodiacReader::ARIES);

		Date jan18(1, 18);
		ZodiacReader reader25(jan18);
		assert(reader25.checkSign() == ZodiacReader::CAPRICORN);
		assert(reader25.stringifySign(reader22.checkSign()) == "Capricorn");
		assert(reader25.onCusp());
		assert(reader25.cuspSign() == ZodiacReader::AQUARIUS);

		Date jan22(1, 22);
		ZodiacReader reader26(jan22);
		assert(reader26.checkSign() == ZodiacReader::AQUARIUS);
		assert(reader26.stringifySign(reader26.checkSign()) == "Aquarius");
		assert(!reader26.onCusp());
		assert(reader26.cuspSign() == ZodiacReader::ARIES);

		Date feb1(2, 1);
		ZodiacReader reader27(feb1);
		assert(reader27.checkSign() == ZodiacReader::AQUARIUS);
		assert(reader27.stringifySign(reader27.checkSign()) == "Aquarius");
		assert(!reader27.onCusp());
		assert(reader27.cuspSign() == ZodiacReader::ARIES);

		Date feb20(2, 20);
		ZodiacReader reader28(feb20);
		assert(reader28.checkSign() == ZodiacReader::PISCES);
		assert(reader28.stringifySign(reader28.checkSign()) == "Pisces");
		assert(reader28.onCusp());
		assert(reader28.cuspSign() == ZodiacReader::AQUARIUS);

		Date mar3(3, 3);
		ZodiacReader reader29(mar3);
		assert(reader29.checkSign() == ZodiacReader::PISCES);
		assert(reader29.stringifySign(reader29.checkSign()) == "Pisces");
		assert(!reader29.onCusp());
		assert(reader29.cuspSign() == ZodiacReader::ARIES);

		Date mar19(3, 19);
		ZodiacReader reader30(mar19);
		assert(reader30.checkSign() == ZodiacReader::PISCES);
		assert(reader30.stringifySign(reader30.checkSign()) == "Pisces");
		assert(reader30.onCusp());
		assert(reader30.cuspSign() == ZodiacReader::ARIES);

		Date mar20(3, 20);
		ZodiacReader reader31(mar20);
		assert(reader31.checkSign() == ZodiacReader::PISCES);
		assert(reader31.stringifySign(reader31.checkSign()) == "Pisces");
		assert(reader31.onCusp());
		assert(reader31.cuspSign() == ZodiacReader::ARIES);

		Date mar21(3, 21);
		ZodiacReader reader32(mar21);
		assert(reader32.checkSign() == ZodiacReader::ARIES);
		assert(reader32.stringifySign(reader32.checkSign()) == "Aries");
		assert(reader32.onCusp());
		assert(reader32.cuspSign() == ZodiacReader::PISCES);

		Date mar22(3, 22);
		ZodiacReader reader33(mar22);
		assert(reader33.checkSign() == ZodiacReader::ARIES);
		assert(reader33.stringifySign(reader33.checkSign()) == "Aries");
		assert(reader33.onCusp());
		assert(reader33.cuspSign() == ZodiacReader::PISCES);
	return (0);
}