/* Write a program to demonstrate use of read() and write()functions
for person class. */


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class person
{
    private:
    char name[50];
    int age;
    public:
    void get_data();
    void write_data();
    void read_data();
    void display();
};
void person::get_data()
{
    cout << "Enter name: ";
    cin.getline(name, 50);
    cout << "Enter age: ";
    cin >> age;
}
void person::write_data() 
{
    ofstream outFile("person.txt", ios::binary);
    if (!outFile.is_open()) 
    {
        cout << "Error opening file for writing.\n";
        return;
    }
    outFile.write((char*)this, sizeof(*this));
    outFile.close();
}
void person::read_data() 
{
    ifstream inFile("person.txt", ios::binary);
    if (!inFile.is_open()) 
    {
        cout << "Error opening file for reading.\n";
        return;
    }
    inFile.read((char*)this, sizeof(*this));
    inFile.close();
}
void person::display() 
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
int main()
{
    person p1;
    p1.get_data();
    p1.write_data();
    person p2;
    p2.read_data();
    p2.display();
    return 0;
}
