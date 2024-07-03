/* WAP to implement stack */

#include <iostream>
#include <stack>
using namespace std;
int main() 
{
    stack<string> lang;
    lang.push("Java");
    lang.push("Python");
    lang.push("C++");
    cout<<lang.top();
    return 0;
}