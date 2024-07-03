/* 7. Create a class date with following data member int day, month
and year
Use constructors and destructors properly and write member
functions for each of the following
e. To set the date
f. To get the date
g. To Print the date into dd/mm/yy format
h. Nextday function, to increment the day by one, while
incrementing day by one be sure for two things
i. Must increment month by one if day is 29, 28, 30 or 31 in a
particular month
ii. Must increment year accordingly */


#include <iostream>
using namespace std;

class date
{
private:
    int dd, mm, yy;

public:
    date();
    void get_data();
    void next();
    void display();
    ~date();
};

date::date()
{
    dd = 1;
    mm = 1;
    yy = 2000; // Default starting date
}

void date::get_data()
{
    reenter:
    cout << "Enter Date (DD MM YYYY): ";
    cin >> dd >> mm >> yy;

    // Validate the entered date
    switch (mm)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (dd < 1 || dd > 31)
            {
                cout << "Invalid day for this month. Re-enter." << endl;
                goto reenter;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (dd < 1 || dd > 30)
            {
                cout << "Invalid day for this month. Re-enter." << endl;
                goto reenter;
            }
            break;
        case 2:
            if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0)
            {
                // Leap year
                if (dd < 1 || dd > 29)
                {
                    cout << "Invalid day for this month. Re-enter." << endl;
                    goto reenter;
                }
            }
            else
            {
                // Not a leap year
                if (dd < 1 || dd > 28)
                {
                    cout << "Invalid day for this month. Re-enter." << endl;
                    goto reenter;
                }
            }
            break;
        default:
            cout << "Invalid month. Re-enter." << endl;
            goto reenter;
    }
}

void date::next()
{
    // Increment the date to the next day
    dd++;
    switch (mm)
    {
        case 1: case 3: case 5: case 7: case 8: case 10:
            if (dd > 31)
            {
                dd = 1;
                mm++;
            }
            break;
        case 12:
            if (dd > 31)
            {
                dd = 1;
                mm = 1;
                yy++;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (dd > 30)
            {
                dd = 1;
                mm++;
            }
            break;
        case 2:
            if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0)
            {
                // Leap year
                if (dd > 29)
                {
                    dd = 1;
                    mm++;
                }
            }
            else
            {
                // Not a leap year
                if (dd > 28)
                {
                    dd = 1;
                    mm++;
                }
            }
            break;
        default:
            break;
    }
}

void date::display()
{
    cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
}

date::~date()
{
    // Destructor
}

int main()
{
    date d[5];

    // Get data for each date
    for (int i = 0; i < 5; i++)
    {
        d[i].get_data();
    }

    // Display each date and its next day
    for (int i = 0; i < 5; i++)
    {
        d[i].display();
        d[i].next();
        d[i].display();
        cout << endl;
    }

    return 0;
}
