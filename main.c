#include "ImplementationDataTypes.h"
#include "ConfigurableInterface.h"
#include "TestcaseInterface.h"
#include "manual_generator.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    ManualGenerator();
    return 0;
}
