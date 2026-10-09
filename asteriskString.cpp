#include <iostream>
#include <string>
using namespace std;
/**
   Returns a string of asterisks of the same length as a given string.
   @param str a string such as "secret"
   @return a string with each character of str changed to a *, such as "******".
*/
string hide_characters(string str)
{
  int asterisk_number = str.length();
  int i = 0;
  string asterisk_string = "";

  for(i = 0; i < asterisk_number; i++)
  {
   asterisk_string += "*";
  }
  return asterisk_string;   /* Your code goes here */
}

int main()
{
   string str;
   getline(cin, str);
   cout << hide_characters(str) << endl;
   
   return 0;
}
