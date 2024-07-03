/* Write a program for string class using copy constructor. */

#include<iostream>
#include<cstring>
using namespace std;
class str
{
char s1[20],s2[20];
public:
str(char *s11,char *s22)
{
    strcpy(s1,s11);
    strcpy(s2,s22);
}
void display()
{
    cout<< "String 1: "<<s1<<endl;
    cout<< "String 2: "<<s2<<endl;
}
};
int main()
{
    char fname[20],lname[20];
    cout<<"Enter First Name: ";
    cin>>fname;
    cout<<"Enter Last Name: ";
    cin>>lname;
    str x1(fname,lname);
    str x2=x1;
    x1.display();
    x2.display();
    return 0;
}