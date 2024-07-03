/* Create a class distance with the following data members
int feet,float inches
Use constructors and destructors properly and write member
functions for the following
i. To get the data
j. To display the data
k. Add two distance objects */


#include <iostream>
using namespace std;

class dist
{
private:
    int ft;
    float in;
    int tf; // total feet
    float ti; // total inches

public:
    dist();
    void get_data();
    void add(dist d[]);
    void display();
    ~dist();
};

dist::dist()
{
    ft = 0;
    in = 0.0;
    tf = 0;
    ti = 0.0;
}

void dist::get_data()
{
    cout << "Feet: ";
    cin >> ft;
    cout << "Inches: ";
    cin >> in;
}

void dist::add(dist d[])
{
    // Adding feet and inches of both objects
    tf = d[0].ft + d[1].ft;
    ti = d[0].in + d[1].in;
}

void dist::display()
{
    cout << "Addition: " << tf << "ft " << ti << "in" << endl;

    // Convert excess inches to feet
    if (ti >= 12.0)
    {
        tf += static_cast<int>(ti / 12);
        ti = fmod(ti, 12.0);
    }

    cout << "Simplified Addition: " << tf << "ft " << ti << "in" << endl;
}

dist::~dist()
{
    // Destructor
}

int main()
{
    dist d[2];

    for (int i = 0; i < 2; i++)
    {
        d[i].get_data();
    }

    d[0].add(d);
    d[0].display();

    return 0;
}
