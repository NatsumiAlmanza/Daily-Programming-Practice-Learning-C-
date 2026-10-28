#include <iostream>
using namespace std;

int main()
{
   const int CAPACITY = 100;
   int nums[CAPACITY];
   
   int length;
   cin >> length;   

   for (int i = 0; i < length; i++)
   {
      cin >> nums[i];
   }

   int pos = 0;
   int neg = 0;

   for (int i = 0; i < length; i++)
   {
      if (nums[i] > 0)
      {
         pos++;
      }
      
      if (nums[i] < 0)
      {
         neg++;
      }
   }
   
 
   cout << "positive: " << pos << endl;
   cout << "negative: " << neg << endl;
   
   return 0;
}
