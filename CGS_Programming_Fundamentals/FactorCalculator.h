#pragma once
#include <string>
#include <vector>

using namespace std;

class FactorCalculator
{
private:
	static int getValidNumberInput();
	static vector<int> getFactors(const int number);
	static string to_string(const vector<int> vector);
public:
	static void findFactors();
};

