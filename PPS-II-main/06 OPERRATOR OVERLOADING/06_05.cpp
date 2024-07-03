/* Create a class distance with following data membersint feet
float inches
write an overloaded operators <, >, ==, != two compare two
distance objects. */


#include <iostream>
using namespace std;

class dist {
private:
    int ft;
    float in;

public:
    dist();
    void get_data();
    void operator==(dist d);
    void operator!=(dist d);
    void operator>(dist d);
    void operator<(dist d);
    void display();
    ~dist();
};

dist::dist() : ft(0), in(0.0) {}

void dist::get_data() {
    cout << "Feet: ";
    cin >> ft;
    cout << "Inches: ";
    cin >> in;
}

void dist::operator==(dist d) {
    if (ft == d.ft && in == d.in) {
        cout << "Both are equal" << endl;
    }
}

void dist::operator!=(dist d) {
    if (ft != d.ft || in != d.in) {
        cout << "Both are different" << endl;
    }
}

void dist::operator>(dist d) {
    if (ft > d.ft || (ft == d.ft && in > d.in)) {
        cout << "First one is greater" << endl;
    }
}

void dist::operator<(dist d) {
    if (ft < d.ft || (ft == d.ft && in < d.in)) {
        cout << "Second one is greater" << endl;
    }
}

void dist::display() {
    while (in >= 12.0) {
        in -= 12.0;
        ft++;
    }
    cout << ft << "ft " << in << "in" << endl;
}

dist::~dist() {}

int main() {
    dist d1, d2;

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
