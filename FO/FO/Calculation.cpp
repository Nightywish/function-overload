#include <iostream>


using namespace std;


struct Triangle
{
	double length;
	double height;

};

double area(double length, double height)

{
	return 0.5 * (length * height);

}
int mainmain()
{
	Triangle triangle;
	triangle.length = 5;
	triangle.height = 10;
	cout << area(triangle.length, triangle.height);


	return 0;

}