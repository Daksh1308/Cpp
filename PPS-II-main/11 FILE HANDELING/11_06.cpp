/* WAP to create array of 10 numbers and write even and odd
numbers into two different files. */

#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
  int i, a[] = {0,1,2,3,4,5,6,7,8,9};
  ofstream fodd, feven;
  fodd.open("odd.txt");
  feven.open("even.txt");
  for (i = 0; i <= 9; i++) 
  {
    if (a[i] % 2 != 0) 
    {
      fodd << a[i] << endl;
    } else 
    {
      feven << a[i] << endl;
    }
  }
  ifstream f1("even.txt");
  cout<<"Even: "<<endl;
  cout<<f1.rdbuf();
  ifstream f2("odd.txt");
  cout<<"Odd: "<<endl;
  cout<<f2.rdbuf();
  fodd.close();
  feven.close();
  return 0;
}