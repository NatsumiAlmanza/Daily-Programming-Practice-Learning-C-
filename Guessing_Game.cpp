#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int input;

	do
	{
		cout << "Enter a number from 1 - 8 [-1 to quit]: ";
		cin >> input;

		if (cin.fail())
		{
			cin.clear();
			string invalid;
			cin >> invalid;
			input = 0;
		}
		if (input == -1)
		{
			cout << "Please guess at least once before exiting the program." << endl;
		}

	} while ((input == -1) || (input <= 0) || (input > 8));

	// This is the end of the first loop. If the user enters a value found in the interval [1,8] then proceed with the evaluation.


	double correct = 0;
	double incorrect = 0;

	do
	{

		if ((input >= 1) && (input <= 8))
		{
			
			srand(time(0));
			int random = rand() % 8 + 1;

			if (input == random)
			{
				correct++;
				cout << "You guessed: " << input << "." << endl
					<< "The number was: " << random << "." << endl
					<< "CORRECT!" << endl;
			}
			else
			{
				incorrect++;
				cout << "You guessed: " << input << "." << endl
					<< "The number was: " << random << "." << endl
					<< "INCORRECT!" << endl;
			}

			do
			{
				cout << "Enter a number from 1 - 8 [-1 to quit]: ";
				cin >> input;

				if (cin.fail())
				{
					cin.clear();
					string invalid2;
					cin >> invalid2;
					input = 0;
				}
			} while ((input == 0) || (input > 8));
		}

	} while (input != -1);

	if (input == -1)
	{
		double percentage_correct = (correct / (incorrect + correct)) * 100.0;
		cout << "Total number of correct guesses: " << correct << endl
		<< "Total number of incorrect guesses: " << incorrect << endl
		<< "Percentage correct: " << fixed << setprecision(1) << percentage_correct << "%" << endl;
	}
	return 0;
}
