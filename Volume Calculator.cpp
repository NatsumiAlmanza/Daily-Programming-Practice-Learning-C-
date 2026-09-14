#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double PI = 3.14159265358979323846; // PI will be used throughout the code //

	double diameter1; // Must be double to allow in decimals //
	cout << "Enter the initial diameter: "; // Set the initial diameter by user input //
	cin >> diameter1;
	double volume1 = PI * (diameter1 * diameter1 * diameter1) / 6; // Compute intial volume. //
	cout << "Initial volume is: " << volume1 << endl; // Tell the user what is the initial volume //

	double diameter2 = diameter1 + 1; // Set your next diameter based on user's first input //
	double volume2 = PI * (diameter2 * diameter2 * diameter2) / 6; // Compute the second volume //
	double change1 = volume2 - volume1; //Compute the change in volume //
	cout << "First volume change is: " << change1 << endl; // Tell the user what's the volume increase or decrease //

	double diameter3 = diameter2 + 1; // Set your next diameter based on previous diameter //
	double volume3 = PI * (diameter3 * diameter3 * diameter3) / 6; // Compute next volume //
	double change2 = volume3 - volume2; // Compute change in volume //
	cout << "Second volume volume change is: " << change2 << endl; // Tell the user what was the change in volume //

	return 0;
}