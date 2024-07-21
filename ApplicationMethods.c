#include <stdio.h>
#include "ImplementationDataTypes.h"
#include "ConfigurableInterface.h"

const char* MajorColorNames[] = MAJORCOLORNAMES;
const char* MinorColorNames[] = MINORCOLORNAMES;

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (MajorColor)(zeroBasedPairNumber / MINORCOLORNAMESSIZE);
    colorPair.minorColor = (MinorColor)(zeroBasedPairNumber % MINORCOLORNAMESSIZE);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
