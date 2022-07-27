#include "ArrayManipulation.h"

#include <iostream>

using namespace std;


int ArrayManipulation::getLargestArrayValue(int *numbers, int size)
{
	if (size == 0)
	{
		cout << "Not a valid array. Exiting." << endl;
		EXIT_FAILURE;
	}

	int maxValue = numbers[0];

	for (int i = 1; i < size; i++)
	{
		if (numbers[i] > maxValue)
		{
			maxValue = numbers[i];
		}
	}
	return maxValue;

}

void ArrayManipulation::findLargestArrayValue()
{
	cout << "Let's do basic array manipulation for an array of size 5." << endl;
	const int size = 5;
	int numbers[size];
	for (int i = 0; i < size; i++)
	{
		cout << endl << "Enter a number for index " << i << " : ";
		cin >> numbers[i];
	}

	cout << "The largest number in your array is " << ArrayManipulation::getLargestArrayValue(numbers, size) << endl;
}
