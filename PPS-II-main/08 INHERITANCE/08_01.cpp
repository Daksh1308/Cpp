/* Assume that Circle is defined using radius and Cylinder is
defined using radius and height.
Write a Circle class as base class and inherit the Cylinder class
from it. Develop classes such that user can compute the area of
Circle objects and volume of Cylinder objects. Area of Circle is
pie *radius*radius, while volume of Cylinder is pie*(radius *
radius)*height.  */


#include <iostream>
using namespace std;
class circle 
{
    protected:
    double rad;
    public:
    circle(double r);
	double area();
};
circle::circle(double r) 
{
        rad = r;
}
double circle::area()
{
    return 3.14 * rad*rad;
}
class cylinder : public circle 
{
    private:
    double height;
    public:
    cylinder(double r,double h);
	double volume();
};
cylinder::cylinder(double r, double h) : circle(r) 
{
    height = h;
}
double cylinder::volume()
{
    return 3.14 * rad*rad * height;
}
int main() 
{
	double r,h;
	cout<<"Radius: ";
	cin>>r;
    circle c(r);
	cout<<"Height: ";
	cin>>h;
    cylinder cyl(r, h);
    cout << "Area of circle: " << c.area() << endl;
    cout << "Volume of cylinder: " << cyl.volume() << endl;
    return 0;
}