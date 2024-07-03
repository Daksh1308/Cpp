/* Write a program using file handling concepts to read from
“Country” and “capital” file and display data for the same. */

#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
  char ch[10];
  ofstream f1;
  f1.open("country.txt");
  f1<<"India"<<endl;
  f1<<"Russia"<<endl;
  f1.open("capital.txt");
  f1<<"Delhi"<<endl;
  f1<<"Moscow"<<endl;
  ifstream f2("country.txt");
  cout<<"Country: "<<endl;
  cout<<f2.rdbuf();
  f2.close();
  ifstream f3("capital.txt");
  cout<<"Capital:"<<endl;
  cout<<f3.rdbuf();
  f3.close();
  return 0;
}