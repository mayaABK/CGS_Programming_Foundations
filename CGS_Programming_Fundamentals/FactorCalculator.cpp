#include "FactorCalculator.h"

#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>

using namespace std;

int FactorCalculator::getValidNumberInput()
{
	int number;
	bool isValidNumber;
	do
	{
		cout << "Enter a number to see its factors: ";
		cin >> number;

		isValidNumber = !cin.fail();

		if (!isValidNumber)
		{
			cout << endl << "Not a valid number. Try again!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}


	} while (!isValidNumber);

	return number;
}

vector<int> FactorCalculator::getFactors(const int number)
{
	vector<int> factors;

	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			factors.push_back(i);
		}
	}

	return factors;
}

string FactorCalculator::to_string(const vector<int> vector)
{
	stringstream vectorStrStream;
	string vectorStr;
	
	copy(vector.begin(), vector.end(), ostream_iterator<int>(vectorStrStream, " "));

	vectorStr = vectorStrStream.str();

	if (!vectorStr.empty())
	{
		vectorStr.pop_back(); //remove trailing empty space
	}

	return vectorStr;
}

void FactorCalculator::findFactors()
{
	int number = FactorCalculator::getValidNumberInput();
	const vector<int> factors = FactorCalculator::getFactors(number);
	string factorsStr = to_string(factors);
	
	cout << "The vectors for " << number << " is: {" << factorsStr << "}" << endl;
}

