/* Create a class time12 that store hh:mm:ss in 12 hour format
along with am or pm, createanother class time24 that store time
hh:mm:ss in 24 hour format. Write a Conversion function to
convert from one class object to another class object. */


#include <iostream>
using namespace std;
class Time24;
class Time12 
{
    private:
    int hour;
    int minute;
    int second;
    string ampm;
    public:
    Time12(int hour = 0, int minute = 0, int second = 0) 
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        this->ampm = (hour >= 12) ? "PM" : "AM";
        if (hour == 0) 
        {
            this->hour = 12;
        } else if (hour > 12) 
        {
            this->hour -= 12;
        }
    }
    void display() const 
    {
        cout << hour << ":" << minute << ":" << second << " " << ampm;
    }
    operator Time24() const;
    friend void convert(Time12& t12, Time24& t24);
};
class Time24 
{
    private:
    int hour;
    int minute;
    int second;
    public:
    Time24(int hour = 0, int minute = 0, int second = 0) 
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void display() const 
    {
        cout << hour << ":" << minute << ":" << second;
    }
    operator Time12() const 
    {
        int hour12 = hour % 12;
        if (hour12 == 0) 
        {
            hour12 = 12;
        }
        return Time12(hour12, minute, second);
    }
    friend void convert(Time12& t12, Time24& t24);
};
Time12::operator Time24() const 
{
    int hour24 = hour;
    if (ampm == "PM" && hour != 12) 
    {
        hour24 += 12;
    } else if (ampm == "AM" && hour == 12) 
    {
        hour24 = 0;
    }
    return Time24(hour24, minute, second);
}
void convert(Time12& t12, Time24& t24) 
{
    t24 = t12;
    t12 = t24;
}
int main() 
{
    int h,m,s;
    cout<<"Hours: ";
    cin>>h;
    cout<<"Minutes: ";
    cin>>m;
    cout<<"Seconds: ";
    cin>>s;
    Time12 t12(h,m,s);
    Time24 t24;
    cout << "Time in 12-hour format: ";
    t12.display();
    cout << endl;
    convert(t12, t24);
    cout << "Time in 24-hour format: ";
    t24.display();
    cout << endl;
    convert(t12, t24);
    cout << "Time in 12-hour format again: ";
    t12.display();
    cout << endl;
    return 0;
}
