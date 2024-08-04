#include "ConfigurableInterface.h"
#include "manual_generator.h"
#include "Application.h"
#include <stdio.h>

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

void ManualGenerator(void)
{
    for (int i = 1; i <= MAJORCOLORNAMESSIZE * MINORCOLORNAMESSIZE; ++i) 
    {
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS]={0};
        int colorPair = GetColorFromPairNumber(i);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d) %s\n",colorPair,colorPairNames);
    }

}