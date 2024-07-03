/* Rewrite date class (from assignment 5) using operatoroverloading
concept. i.e. overload (++) operator */


#include <iostream>
using namespace std;

class date {
private:
    int dd, mm, yy;
    int days_in_month;

public:
    date();
    void get_data();
    void operator++();  // Prefix increment operator
    void display();
    ~date();
};

date::date() : dd(0), mm(0), yy(0), days_in_month(0) {}

void date::get_data() {
    while (true) {
        cout << "Enter date (dd mm yyyy): ";
        cin >> dd >> mm >> yy;
        
        // Validate the entered date
        if (dd <= 0 || mm <= 0 || yy <= 0 || mm > 12) {
            cout << "Invalid date. Please enter again." << endl;
            continue;
        }
        
        switch (mm) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days_in_month = 31;
                break;
            case 4: case 6: case 9: case 11:
                days_in_month = 30;
                break;
            case 2:
                if (yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0)) {
                    days_in_month = 29; // Leap year
                } else {
                    days_in_month = 28; // Non-leap year
                }
                break;
            default:
                cout << "Invalid month. Please enter again." << endl;
                continue;
        }
        
        if (dd > days_in_month) {
            cout << "Invalid date. Please enter again." << endl;
            continue;
        }
        
        break; // Date is valid
    }
}

void date::operator++() {
    ++dd;
    if (dd > days_in_month) {
        dd = 1;
        ++mm;
        if (mm > 12) {
            mm = 1;
            ++yy;
        }
        
        switch (mm) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days_in_month = 31;
                break;
            case 4: case 6: case 9: case 11:
                days_in_month = 30;
                break;
            case 2:
                if (yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0)) {
                    days_in_month = 29; // Leap year
                } else {
                    days_in_month = 28; // Non-leap year
                }
                break;
        }
    }
}

date::~date() {}

void date::display() {
    cout << dd << "/" << mm << "/" << yy << endl;
}

int main() {
    date d;
    d.get_data();
    d.display();
    
    cout << "Next 5 days:" << endl;
    for (int i = 0; i < 5; ++i) {
        ++d;
        d.display();
    }

    return 0;
}
