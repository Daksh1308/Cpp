/* WAP to read from one file and write it to another file. */


#include<iostream>
#include<fstream>
using namespace std;
class person
{
  public:
  char name[20],s_name[20];
  void read();
  void write();
};
void person::read()
{
  fstream file;
  cout<<"First Name: ";
  cin>>name;
  cout<<"Last Name: ";
  cin>>s_name;
  file.open("person.txt", ios::out);
  file.write((char * ) this, sizeof(person));
  file.close();
}
void person::write()
{
  fstream file;
  file.open("person.txt", ios::in);
  while (file.read((char * ) this, sizeof(person)));
  {
    cout<<"Full Name: "<<name<<" "<< s_name;
  }
  file.close();
}
int main()
{
  person p;
  p.read();
  p.write();
  return 0;
} 