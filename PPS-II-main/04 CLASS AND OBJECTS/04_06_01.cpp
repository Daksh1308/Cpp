/* Add constructors and destructors in above five examples. */


#include<iostream>
using namespace std;
class player
{
    public:
    string name;
    int age, runs, test, hr, lr;
    float avg;
    player();
    void get_data();
    void display();
    void calc_avg();
    ~player();
};
player::player()
{
    age = 0, runs = 0, test = 0, hr = 0, lr = 0 ,avg = 0;
    name={0};
    cout<<"Consturctor Invoked"<<endl;
}
void player::get_data()
{
    cout <<"Enter Name : ";
    cin >> name;
    cout <<"Enter Age : ";
    cin >> age;
    cout <<"Enter the No Of Tests Played: ";
    cin >> test;
    cout <<"Enter the Highest Runs: ";
    cin >> hr;
    cout <<"Enter the Lowest Runs : ";
    cin >> lr;
    cout <<"Enter Total Runs: ";
    cin >> runs;   
}
void player::display()
{
  cout <<"Name Of The Player : "<<name<<endl;
  cout <<"Age Of The Player : "<<age<<endl;
  cout <<"Tests Played By The Player : "<<test<<endl;
  cout <<"The Highest Runs Of Player : "<<hr<<endl;
  cout <<"The Lowest Runs Of Player : "<<lr<<endl;
  cout <<"Runs Made By The Player : "<<runs<<endl;
  cout <<"Average Runs Made By The Player : "<<avg<<endl;
}
void player::calc_avg()
{
  avg = runs / test;
}
player::~player()
{
  cout<<"Destructor Invoked"<<endl;
}
int main ()
{
  player p1;
  // p1.get_data();
  // p1.calc_avg();
  p1.display();
  return 0;
}