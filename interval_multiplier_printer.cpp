#include <iostream>
using namespace std;

void PrintVals(int value1, int value2)
{
   int m = 100; //multiple
   value2 = value2 * m;
   value1 = value1 * m;
   cout << value1 << endl;
   
   for (int i = value1 + m; i < value2; i += 100)
   {
      cout << i << endl;
   }
   
   cout << value2 << endl;
}

int main() {
	int num1;
	int num2;

	cin >> num1;
	cin >> num2;

	PrintVals(num1, num2);

	return 0;
}
