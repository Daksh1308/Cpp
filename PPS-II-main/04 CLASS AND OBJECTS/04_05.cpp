/* Create a student with the following data members
rollno,name, marks[6],per, class
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate percentage
d. To calculate class based on percentage */


#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNo;
    int marks[6];
    float percentage;

public:
    void getData();
    void calculatePercentage();
    void display() const;
};

void Student::getData() {
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Roll No: ";
    std::cin >> rollNo;

    for (int i = 0; i < 6; ++i) {
        std::cout << "Subject " << i + 1 << " Marks: ";
        std::cin >> marks[i];
        
        // Validate input marks (assuming valid marks range from 0 to 100)
        while (marks[i] < 0 || marks[i] > 100) {
            std::cout << "Invalid marks! Please enter marks between 0 and 100: ";
            std::cin >> marks[i];
        }
    }
}

void Student::calculatePercentage() {
    int totalMarks = 0;
    for (int i = 0; i < 6; ++i) {
        totalMarks += marks[i];
    }
    percentage = static_cast<float>(totalMarks) / 6.0;
}

void Student::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Roll No: " << rollNo << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cout << "Subject " << i + 1 << " Marks: " << marks[i] << std::endl;
    }
    std::cout << "Percentage: " << percentage << "%" << std::endl;

    if (percentage >= 80) {
        std::cout << "Distinction" << std::endl;
    } else if (percentage >= 60) {
        std::cout << "First Class" << std::endl;
    } else if (percentage >= 40) {
        std::cout << "Second Class" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }
}

int main() {
    Student s1;
    s1.getData();
    s1.calculatePercentage();
    s1.display();
    return 0;
}
