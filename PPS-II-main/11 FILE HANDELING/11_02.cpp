/* Write a program using file handling to demonstrate theconcepts of
get() and put() functions */

#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    char c;
    ofstream f1("output.txt");
    if (!f1.is_open()) 
    {
        cout<<"Error opening output file."<<endl;
        return 1;
    }
    for (int i = 0; i < 26; i++) 
    {
        c = 'A' + i;
        f1.put(c);
    }
    f1.close();
    ifstream f2("output.txt");
    if (!f2.is_open()) 
    {
        cout<<"Error opening input file."<<endl;
        return 1;
    }
    while (f2.get(c)) 
    {
        cout<<c<<" ";
    }
    f2.close();
    return 0;
}