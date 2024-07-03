#include <iostream>
using namespace std;
class student
{
    public:
    int rollno,marks[6],i;
    float per;
    string name;
    student();
    void get_data();
    void calc_percentage();
    void display();
    ~student();
};
student::student()
{
    rollno=0,i=0,per=0;
    name={0};
    for (int i = 0; i < 6; i++)
    {
        marks[i]=0;
    }
    cout<<"Consturctor Invoked"<<endl;
}
void student::get_data()
{
    cout<<"Name : ";
    cin>>name;
    cout<<"Roll No : ";
    cin>>rollno;
    for (i = 0; i < 6; i++)
    {
        cout<<"Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
}
void student::calc_percentage()
{
    for ( i = 0; i < 6; i++)
    {
        per=per+marks[i];
    }
    per=per/6;
}
void student::display()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Roll No. : "<<rollno<<endl;
    for ( i = 0; i < 6; i++)
    {
        cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
    }
    cout<<"Percentage : "<<per<<"%"<<endl;
    if (per<=100 && per>=80)
    {
        cout<<"Distinction"<<endl;
    }
    else if (per<=79 && per>=60)
    {
        cout<<"First Class"<<endl;
    }
    else if (per<=59 && per>=40)
    {
        cout<<"Second Class"<<endl;
    }
    else 
    {
        cout<<"Fail"<<endl;
    }
}
student::~student()
{
    cout<<"Destructor Invoked"<<endl;
}
int main()
{
    student s1;
    s1.get_data();
    s1.calc_percentage();
    s1.display();
    return 0;
}