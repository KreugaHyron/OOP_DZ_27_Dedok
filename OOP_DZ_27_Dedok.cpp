#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Point {
public:
	int x;
	int y;
	Point(int x_val, int y_val) : x(x_val), y(y_val) {}
};
int main()
{
   //Task_1 
   vector <Point> pointVector;
   pointVector.push_back(Point(1, 2));
   pointVector.push_back(Point(3, 4));
   pointVector.push_back(Point(5, 6));
   pointVector.push_back(Point(7, 8));
   pointVector.push_back(Point(9, 10));
   cout << "Elements of vector Point:\n";
   for (const auto& point : pointVector) {
	  cout << "x: " << point.x << ", y: " << point.y << ")\n";
   }
   //Task_2
   list <Point> pointList;
   pointList.push_back(Point(1, 2));
   pointList.push_back(Point(3, 4));
   pointList.push_back(Point(5, 6));
   pointList.push_back(Point(7, 8));
   pointList.push_back(Point(9, 10));
   cout << "Elements of list Point:\n";
   for (const auto& point : pointList) {
	  cout << "(" << point.x << "," << point.y << ")\n";
   }
}
