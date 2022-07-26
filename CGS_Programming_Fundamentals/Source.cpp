#include "HelloWorld.h"
#include "FunMath.h"
#include "LeapYearCalculator.h"
#include "FactorCalculator.h"

int main()
{
	HelloWorld::printHelloWorld();

	FunMath::doSumOfThreeNumbers();
	FunMath::doCubeNumber();

	LeapYearCalculator::checkLeapYear();

	FactorCalculator::findFactors();

	return 1;
}
