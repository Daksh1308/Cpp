/* Rewrite student class (from assignment 5) using comparison
overloaded operators < & >. */


#include <iostream>
using namespace std;

class student {
private:
    int rn, per, marks[6];
    char name[20];

public:
    student();
    void get_data();
    void percentage();
    void operator>(student s);
    void operator<(student s);
    void display();
    ~student();
};

student::student() {
    rn = 0;
    per = 0;
    name[0] = '\0';
}

void student::get_data() {
    cout << "Name: ";
    cin.ignore(); // Ignore any remaining newline characters from previous inputs
    cin.getline(name, 20);
    cout << "Roll No: ";
    cin >> rn;
    for (int i = 0; i < 6; i++) {
        cout << "Marks " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void student::percentage() {
    int total = 0;
    for (int i = 0; i < 6; i++) {
        total += marks[i];
    }
    per = total / 6;
}

void student::operator<(student s) {
    if (s.per < per) {
        cout << "First one scored higher" << endl;
    } else {
        cout << "Second one scored higher" << endl;
    }
}

void student::operator>(student s) {
    if (s.per > per) {
        cout << "Second one scored higher" << endl;
    } else {
        cout << "First one scored higher" << endl;
    }
}

void student::display() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rn << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Marks " << i + 1 << ": " << marks[i] << endl;
    }
    cout << "Percentage: " << per << "%" << endl;
}

student::~student() {}

int main() {
    student s1, s2;

    cout << "Enter details for student 1:" << endl;
    s1.get_data();
    s1.percentage();

    cout << "Enter details for student 2:" << endl;
    s2.get_data();
    s2.percentage();

    cout << "Details of student 1:" << endl;
    s1.display();

    cout << "Details of student 2:" << endl;
    s2.display();

    cout << "Comparison:" << endl;
    s1 > s2; // Compare percentages
    s1 < s2; // Compare percentages

    return 0;
}
