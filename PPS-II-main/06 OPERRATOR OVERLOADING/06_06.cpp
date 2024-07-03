/* Write a program to compare two date class objects byoverloading
<, >, ==,!= operators.
 */
#include <iostream>
using namespace std;

class date {
private:
    int dd, mm, yy;

public:
    date();
    void get_data();
    void operator==(date d);
    void operator!=(date d);
    void operator>(date d);
    void operator<(date d);
    void display();
    ~date();
};

date::date() : dd(0), mm(0), yy(0) {}

void date::get_data() {
    re:
    cout << "Date (dd mm yyyy): ";
    cin >> dd >> mm >> yy;

    if (yy < 1000 || yy > 3000 || mm < 1 || mm > 12) {
        cout << "Invalid date! Please enter again." << endl;
        goto re;
    }

    bool leapYear = (yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0);

    switch (mm) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (dd < 1 || dd > 31) {
                cout << "Invalid date! Please enter again." << endl;
                goto re;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (dd < 1 || dd > 30) {
                cout << "Invalid date! Please enter again." << endl;
                goto re;
            }
            break;
        case 2:
            if (leapYear && (dd < 1 || dd > 29)) {
                cout << "Invalid date! Please enter again." << endl;
                goto re;
            } else if (!leapYear && (dd < 1 || dd > 28)) {
                cout << "Invalid date! Please enter again." << endl;
                goto re;
            }
            break;
    }
}

void date::operator==(date d) {
    if (dd == d.dd && mm == d.mm && yy == d.yy) {
        cout << "Both dates are equal" << endl;
    }
}

void date::operator!=(date d) {
    if (!(dd == d.dd && mm == d.mm && yy == d.yy)) {
        cout << "Dates are different" << endl;
    }
}

void date::operator>(date d) {
    if (yy > d.yy || (yy == d.yy && mm > d.mm) || (yy == d.yy && mm == d.mm && dd > d.dd)) {
        cout << "First date is greater" << endl;
    }
}

void date::operator<(date d) {
    if (yy < d.yy || (yy == d.yy && mm < d.mm) || (yy == d.yy && mm == d.mm && dd < d.dd)) {
        cout << "Second date is greater" << endl;
    }
}

void date::display() {
    cout << (dd < 10 ? "0" : "") << dd << "/" << (mm < 10 ? "0" : "") << mm << "/" << yy << endl;
}

date::~date() {}

int main() {
    date d1, d2;

    d1.get_data();
    d2.get_data();

    d1.display();
    d2.display();

    d1 == d2;
    d1 != d2;
    d1 > d2;
    d1 < d2;

    return 0;
}
