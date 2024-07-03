/* Define class employee which has fname and lname as data
member. Define following:
1. Constructor for employee class with default arguments
2. Print function
Derive a class called hourly_worker (with wage and hours as data
members). Define following:
1. Constructor for hourly_worker class with default
arguments
2. Getpay() function that calculates and returns the pay and
3. A print function */


#include <iostream>
#include <cstring>
using namespace std;
class emp
{
    protected:
    string fname;
    string lname;
    public:
    emp(string fn = "", string ln = "")
    {
    fname = fn;
    lname = ln;
    }
    void display();
};
void emp::display()
{
    cout << "First Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
}
class h_worker : public emp 
{
    private:
    double wage;
    double hours;
    public:
    h_worker(double w = 0.0, double h = 0.0, string fn = "", string ln = "") : emp(fn, ln) 
    {
        wage = w;
        hours = h;
    }
    double get_pay();
    void display();
};
double h_worker::get_pay()
{
    return wage * hours;
}
void h_worker::display()
{
    emp::display();
    cout << "Wage: " << wage << endl;
    cout << "Hours: " << hours << endl;
    cout << "Pay: " << get_pay() << endl;
}
int main() 
{
    string fn,ln;
    double w,h;
    cout<<"First name: ";
    cin>>fn;
    cout<<"Last name: ";
    cin>>ln;
    cout<<"Wages: ";
    cin>>w;
    cout<<"Hours: ";
    cin>>h;
    h_worker hw(w,h,fn,ln);
    hw.display();
    return 0;
}