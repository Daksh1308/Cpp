/* Create a time with following data members
int h,m,s
Write member functions for each of the following
Create a time with following data members
int h,m,s
Write member functions for each of the following */


#include <iostream>
using namespace std;

class Waqt
{
public:
    float h, m, s;

    // Constructor to initialize variables
    Waqt() : h(0), m(0), s(0) {}

    void get_data();
    void display_data();
    void convert();
};

void Waqt::get_data()
{
    cout << "Enter seconds: ";
    cin >> s;

    while (s < 0) {
        cout << "Please enter a non-negative value for seconds: ";
        cin >> s;
    }
}

void Waqt::display_data()
{
    cout << "\nTime converted:\n";
    cout << "Seconds: " << s << endl;
    cout << "Minutes: " << m << endl;
    cout << "Hours: " << h << endl;
}

void Waqt::convert()
{
    const float SECONDS_IN_MINUTE = 60;
    const float SECONDS_IN_HOUR = 3600;

    m = s / SECONDS_IN_MINUTE;
    h = s / SECONDS_IN_HOUR;
}

int main()
{
    Waqt t1;
    t1.get_data();
    t1.convert();
    t1.display_data();

    return 0;
}
