/* Create a class time with the following data members
int h,m,s(input data in seconds only)
Use constructors and destructors properly and write member
functions for each of the following
a. To get the data
b. To display the data
c. To convert the seconds into h, m ,s
d. To add two time objects */


#include <iostream>
using namespace std;

class waqt
{
private:
    float h, m, s; // Hours, Minutes, Seconds
    float th, tm, ts; // Total Hours, Total Minutes, Total Seconds

public:
    waqt();
    void get_data();
    void convert();
    void add(waqt t[]);
    void display_data();
    ~waqt();
};

waqt::waqt()
{
    h = 0;
    m = 0;
    s = 0;
    th = 0;
    tm = 0;
    ts = 0;
}

void waqt::get_data()
{
    cout << "Seconds: ";
    cin >> s;
}

void waqt::convert()
{
    tm = s / 60.0; // Total minutes
    th = s / 3600.0; // Total hours
}

void waqt::add(waqt t[])
{
    th = t[0].th + t[1].th; // Adding total hours
    tm = t[0].tm + t[1].tm; // Adding total minutes
    ts = t[0].s + t[1].s;   // Adding seconds

    // Adjusting total minutes and total hours
    tm += static_cast<int>(ts / 60);
    ts = fmod(ts, 60);

    th += static_cast<int>(tm / 60);
    tm = fmod(tm, 60);
}

void waqt::display_data()
{
    cout << "Hours: " << th << endl;
    cout << "Minutes: " << tm << endl;
    cout << "Seconds: " << ts << endl;
}

waqt::~waqt()
{
    // Destructor
}

int main()
{
    waqt t[2];

    for (int i = 0; i < 2; i++)
    {
        t[i].get_data();
        t[i].convert(); // Convert seconds to total hours and minutes
    }

    t[0].add(t); // Add two time objects
    t[0].display_data(); // Display the result

    return 0;
}
