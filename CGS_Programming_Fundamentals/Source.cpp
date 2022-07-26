#include "HelloWorld.h"
#include "FunMath.h"
#include "LeapYearCalculator.h"

int main()
{
	HelloWorld::printHelloWorld();

	FunMath::doSumOfThreeNumbers();
	FunMath::doCubeNumber();

	LeapYearCalculator::checkLeapYear();
	return 1;
}
