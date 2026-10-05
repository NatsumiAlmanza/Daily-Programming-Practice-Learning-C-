#include <iostream>
#include <cmath>
using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{

     double new_x1 = x1 - x3;
   double new_x2 = x2 - x3;
   double new_y1 = y1 - y3;
   double new_y2 = y2 - y3;
   double new_area = ((new_x1 * new_y2) - (new_x2 * new_y1)) / 2;
   double final_answer = abs(new_area);
   return final_answer;

}

int main()
{
   double x1;
   double y1;
   double x2;
   double y2;
   double x3;
   double y3;
   
   cin >> x1;
   cin >> y1;
   cin >> x2;
   cin >> y2;
   cin >> x3;
   cin >> y3;
   
   cout << area(x1, y1, x2, y2, x3, y3) << endl;
   
   return 0;
}
