/* Create a student with the following data members rollno, name,
marks[6], per, class
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate percentage
d. To calculate class based on percentage
e. To sort the students percentagewise
f. Use constructors and destructors */


#include <iostream>
#include <cstring>
#include <algorithm> // for std::swap
using namespace std;

class student
{
public:
    int rn, per, marks[6];
    char name[20], gr[20];

    student();
    void get_data();
    void percentage();
    void grade();
    static bool compareByPercentage(const student &a, const student &b);
    void display();
};

student::student()
    : rn(0), per(0)
{
    marks[0] = marks[1] = marks[2] = marks[3] = marks[4] = marks[5] = 0;
    name[0] = '\0';
    gr[0] = '\0';
}

void student::get_data()
{
    cout << "Name: ";
    cin >> name;
    cout << "Roll No: ";
    cin >> rn;
    for (int i = 0; i < 6; i++)
    {
        cout << "Marks " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void student::percentage()
{
    int total = 0;
    for (int i = 0; i < 6; i++)
    {
        total += marks[i];
    }
    per = total / 6;
}

void student::grade()
{
    if (per >= 80)
    {
        strcpy(gr, "Distinction");
    }
    else if (per >= 60)
    {
        strcpy(gr, "First Class");
    }
    else if (per >= 40)
    {
        strcpy(gr, "Second Class");
    }
    else
    {
        strcpy(gr, "Fail");
    }
}

void student::display()
{
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rn << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Marks " << i + 1 << ": " << marks[i] << endl;
    }
    cout << "Percentage: " << per << "%" << endl;
    cout << "Class: " << gr << endl;
}

bool student::compareByPercentage(const student &a, const student &b)
{
    return a.per > b.per; // Sort in descending order of percentage
}

int main()
{
    student s[2];

    for (int i = 0; i < 2; i++)
    {
        s[i].get_data();
        s[i].percentage();
        s[i].grade();
    }

    // Sort students by percentage (descending order)
    std::sort(s, s + 2, student::compareByPercentage);

    // Display sorted students
    for (int i = 0; i < 2; i++)
    {
        s[i].display();
    }

    return 0;
}
