/* Write a program to compare two time class objects byoverloading
<, >, ==,!= operators. */


#include <iostream>
using namespace std;

class timee {
private:
    int h, m, s;

public:
    timee();
    void get_data();
    void operator==(timee t);
    void operator!=(timee t);
    void operator>(timee t);
    void operator<(timee t);
    void display();
};

timee::timee() : h(0), m(0), s(0) {}

void timee::get_data() {
    do {
        cout << "Hours: ";
        cin >> h;
        cout << "Minutes: ";
        cin >> m;
        cout << "Seconds: ";
        cin >> s;

        if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
            cout << "Invalid time! Please enter again." << endl;
        }
    } while (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59);
}

void timee::operator==(timee t) {
    if (h == t.h && m == t.m && s == t.s) {
        cout << "Both times are equal" << endl;
    }
}

void timee::operator!=(timee t) {
    if (h != t.h || m != t.m || s != t.s) {
        cout << "Times are different" << endl;
    }
}

void timee::operator>(timee t) {
    if (h > t.h || (h == t.h && m > t.m) || (h == t.h && m == t.m && s > t.s)) {
        cout << "First time is greater" << endl;
    }
}

void timee::operator<(timee t) {
    if (h < t.h || (h == t.h && m < t.m) || (h == t.h && m == t.m && s < t.s)) {
        cout << "Second time is greater" << endl;
    }
}

void timee::display() {
    cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << ":" << (s < 10 ? "0" : "") << s << endl;
}

int main() {
    timee t1, t2;

    cout << "Enter Time 1:" << endl;
    t1.get_data();
    cout << "Enter Time 2:" << endl;
    t2.get_data();

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    t1 == t2;
    t1 != t2;
    t1 > t2;
    t1 < t2;

    return 0;
}
