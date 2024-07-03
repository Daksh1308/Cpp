/* Write a program to count number of objects created for any
class. */


#include <iostream>
using namespace std;
class demo
{
    public:
    static int count;
    demo();
};
demo::demo()
{
    count++;
}
int demo::count;
int main()
{
    demo a,b,c,d;
    cout<<"No. of objects created: "<<demo::count; 
    return 0;
}