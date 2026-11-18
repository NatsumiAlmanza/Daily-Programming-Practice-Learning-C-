#include <cstring>
#include <iostream>
using namespace std;

int main() {
   char employeeName[20];
	char searchChar;
	int i;

   cin >> employeeName;
	cin >> searchChar;

   if(strchr(employeeName, searchChar) != NULL)
   {
   for(int i = 0; i < strlen(employeeName); i++)
      {
         if(employeeName[i] == searchChar)
         {
            employeeName[i] = '!';
         }
      }
   }

	cout << employeeName << endl;

   return 0;
}
