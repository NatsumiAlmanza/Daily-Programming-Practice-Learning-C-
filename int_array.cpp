#include <iostream>
using namespace std;

void print_array(int a[], int size);

int main()
{
   const int SIZE = 18;
   int a[SIZE];

   int i = 0;
   
   for (int c = 0; c < SIZE; c++)
   {
      a[c] = i;
      i++;
      if (i == 3)
      {
         i = 0;
      }
   }
 
   print_array(a, SIZE);

   return 0;
}

/**
   Prints an array of integers, each separated by a comma
   @param a is the the array of strings
   @param size is the size of the array
*/
void print_array(int a[], int size)
{
   cout << "[";
   if (size > 0)
   {
      cout << a[0];
      for (int i = 1; i < size; i++)
      {
         cout << ", " << a[i];
      }
   }
   cout << "]" << endl;
}
