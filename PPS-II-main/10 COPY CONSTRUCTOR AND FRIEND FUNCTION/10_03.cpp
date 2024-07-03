/* Explain and demonstrate, how virtual function to achieve
runtime polymorphism?
Define Friend Function. Create two classes DM and DB whichstore the value of distances.
DM stores distances in meters and centimeters and DB in feet and
inches. Write a program that can read values for the class objects
and add one object of DM with another object of DB. Use a friend
function to carry out the addition operation. The object stores the
results may a DM object or DB object, depending on the units in
which the results are required. The display should be in the format
of feet and inches or meters and centimeters depending on the object
on display.
1 Feet = 0.3048 Meter 1 Meter = 3.28 Feet
1 Inch = 2.54 Centimeter 1 Centimeter = 0.3937 Inch */

#include <iostream>
#include <iomanip>
using namespace std;
class dm;
class db
{
	public:
	float feet,inches;
	void getdata(float p,float q)
	{
		feet=p;
		inches=q;
	}
	float ftm(float);
	float icm(float);
	friend float sum(db,dm);
};
class dm
{
	public:
	float m,cm;
	void getdata(float p,float q)
	{
		m=p;
		cm=q;
	}
	float mf(float);
	float cmi(float);
	friend float sum(db,dm);
};
float db::ftm(float m)
{
    return feet*(0.3048);
}
float db::icm(float c)
{
    return inches*(2.54);
}
float dm :: mf(float f)
{
    return m*(3.28);
}
float dm::cmi(float i)
{
    return cm*(0.3937);
}

float sum(db a, dm b)
{
    cout<<"Addition: "<<a.feet+b.mf(b.m)<<"ft "<<setw(10)<<a.inches+b.cmi(b.cm)<<" in"<<endl;
	cout<<"Addition: "<<b.m+a.ftm(a.feet)<<"m "<<setw(10)<<b.cm+a.icm(a.inches)<<" cm"<<endl;
	return 0;
}
int main()
{
    db a1;
    float a,b,c,d;
    cout<<"Feet: ";
    cin>>a;
    cout<<"Inches: ";
    cin>>b;
    cout<<"Metre: ";
    cin>>c;
    cout<<"Centimetre: ";
    cin>>d;
    a1.getdata(a,b);
    dm b1;
    b1.getdata(c,d);
    sum(a1,b1);
    return 0;
}