#include "LeapYearCalculator.h"

#include <iostream>

using namespace std;

bool LeapYearCalculator::isLeapYear(int year)
{
	return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}

int LeapYearCalculator::getValidYearInput()
{
	int year;
	bool isValidYear;
	do
	{
		cout << "Enter a year to see if it's a leap year: ";
		cin >> year;

		isValidYear = !cin.fail() && (year >= 0);

		if (!isValidYear)
		{
			cout << endl << "Not a valid year. Try again!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}


	} while (!isValidYear);

	return year;
}

void LeapYearCalculator::checkLeapYear()
{
	int year = getValidYearInput();
	string isLeapYear = (LeapYearCalculator::isLeapYear(year)) ? "" : "not";

	cout << year << " is " << isLeapYear << " a leap year" << endl;
}
