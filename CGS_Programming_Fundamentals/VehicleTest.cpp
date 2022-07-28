#include "Airplane.h"
#include "Boat.h"
#include "Car.h"

#include<iostream>
#include "VehicleTest.h"

using namespace std;

void VehicleTest::run()
{
	Airplane plane;
	Boat boat;
	Car car;

	cout << "Airplane driving ";
	plane.drive();
	cout << endl << "Boat driving ";
	boat.drive();
	cout << endl << "Car driving ";
	car.drive();
}