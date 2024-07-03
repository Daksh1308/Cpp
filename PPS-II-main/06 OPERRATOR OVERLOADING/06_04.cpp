/* Create class string with following data member
char str[20], for performing various comparison operations,
overload >, <, ==, != operators for two string objects. */


#include<iostream>
#include<cstring>
using namespace std;

class stringg {
private:
    char str[20]; // Array to hold the string

public:
    void get_data();
    bool operator ==(const stringg& a) const; // Equality operator
    bool operator !=(const stringg& a) const; // Inequality operator
    bool operator >(const stringg& a) const;  // Greater than operator
    bool operator <(const stringg& a) const;  // Less than operator
    void display() const;
};

void stringg::get_data() {
    cout << "Enter string: ";
    cin.getline(str, 20);
}

bool stringg::operator ==(const stringg& a) const {
    return strcmp(str, a.str) == 0;
}

bool stringg::operator !=(const stringg& a) const {
    return strcmp(str, a.str) != 0;
}

bool stringg::operator >(const stringg& a) const {
    return strcmp(str, a.str) > 0;
}

bool stringg::operator <(const stringg& a) const {
    return strcmp(str, a.str) < 0;
}

void stringg::display() const {
    cout << "String: " << str << endl;
}

int main() {
    stringg s1, s2;

    s1.get_data();
    s2.get_data();

    s1.display();
    s2.display();

    if (s1 == s2) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are different" << endl;
    }

    if (s1 > s2) {
        cout << "First string is greater" << endl;
    } else if (s1 < s2) {
        cout << "Second string is greater" << endl;
    } else {
        cout << "Strings are equal" << endl;
    }

    return 0;
}
