#include "HelloWorld.h"
#include "FunMath.h"
#include "LeapYearCalculator.h"
#include "FactorCalculator.h"
#include "ArrayManipulation.h"
#include "VehicleTest.h"

int main()
{
	HelloWorld::printHelloWorld();

	FunMath::doSumOfThreeNumbers();
	FunMath::doCubeNumber();

	LeapYearCalculator::checkLeapYear();

	FactorCalculator::findFactors();

	ArrayManipulation::findLargestArrayValue();

	VehicleTest::run();

	return 1;
}
