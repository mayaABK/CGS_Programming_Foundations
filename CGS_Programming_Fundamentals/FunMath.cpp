#include "FunMath.h"

#include <iostream>

using namespace std;


void FunMath::sumOfThreeNumbersPrompt()
{
	cout << "Enter 3 numbers to get their sum! Hit the enter key after each number." << endl;
}

int FunMath::sumOfThreeNumbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

void FunMath::doSumOfThreeNumbers()
{
	FunMath::sumOfThreeNumbersPrompt();

	int num1;
	int num2;
	int num3;
	cin >> num1 >> num2 >> num3;

	cout << "The sum of " << num1 << " + " << num2 << " + " << num3 << " = " << FunMath::sumOfThreeNumbers(num1, num2, num3) << endl;
}

void FunMath::doCubeNumber()
{
	cout << "Enter a number to cube" << endl;

	int num;
	cin >> num;
	
	int numCubed = num * num * num;

	cout << num << " cubed is " << numCubed << endl;
}