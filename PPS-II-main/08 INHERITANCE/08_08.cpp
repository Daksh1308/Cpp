/* Create classes as shown in figure. Write a program to create, update
and display information using inheritance */


#include <iostream>
#include <string>
using namespace std;
class stu 
{
    protected:
    string name;
    int rn;
    public:
    stu();
    void get_data();
    void display();
};
stu::stu(){}
void stu::get_data()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll No: ";
    cin>>rn;
}
void stu::display() 
{
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rn << endl;
}
class uni : public stu
{
    protected:
    string uname;
    public:
    uni();
    void get_data();
    void display();
};
uni::uni(){}
void uni::get_data()
{
    stu::get_data();
    cout<<"Name of University: ";
    cin>>uname;
}
void uni::display()
{
    stu::display();
    cout << "University Name: " << uname << endl;
}
class CSE : public uni 
{
    public:
    CSE();
    void display();
};
CSE::CSE(){}
void CSE::display() 
{
    uni::display();
    cout << "Brach: " <<"CSE"<< endl;
}
class IT : public uni 
{
    public:
    IT();
    void display();
};
IT::IT(){}
void IT::display() 
{
    uni::display();
    cout << "Branch: " <<"IT"<< endl;
}
int main() 
{
    IT i;
    CSE c;
    cout<<"IT Student: "<<endl;
    i.get_data();
    cout<<endl;
    cout<<"CSE Student: "<<endl;
    c.get_data();
    cout<<endl;
    i.display();
    cout<<endl;
    c.display();
    return 0;
}