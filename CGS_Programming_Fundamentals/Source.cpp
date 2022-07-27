#include "HelloWorld.h"
#include "FunMath.h"
#include "LeapYearCalculator.h"
#include "FactorCalculator.h"
#include "ArrayManipulation.h"

int main()
{
	HelloWorld::printHelloWorld();

	FunMath::doSumOfThreeNumbers();
	FunMath::doCubeNumber();

	LeapYearCalculator::checkLeapYear();

	FactorCalculator::findFactors();

	ArrayManipulation::findLargestArrayValue();

	return 1;
}
