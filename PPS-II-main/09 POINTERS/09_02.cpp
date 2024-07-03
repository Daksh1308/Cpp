/*  Create class Country with country name, capital and population
as data member. Country name and capital should be defined as
char *.*/

#include <iostream>
#include <cstring>
using namespace std;
class country 
{
    char *name;
    char *capital;
    int population;
    public:
    country();
    void get_data();
    char* get_name();
    void sort(country **c);
    void display();
    ~country();
};
country::country() 
{
    name = new char[50];
    capital = new char[50];
}
void country::get_data() 
{
    cout << "Enter country name: ";
    cin.getline(name, 50);
    cout << "Enter capital: ";
    cin.getline(capital, 50);
    cout << "Enter population: ";
    cin >> population;
    cin.ignore();
}
char* country:: get_name() 
{
    return name;
}
void country::sort(country **c) 
{
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (strcmp(c[i]->get_name(), c[j]->get_name()) > 0)
            {
                country *temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}
void country::display() 
{
    cout << "Country: " << name << endl;
    cout << "Capital: " << capital << endl;
    cout << "Population: " << population << endl;
}
country::~country() 
        {
            delete [] name;
            delete [] capital;
        }
int main() 
{
    country **c = new country*[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter data for country " << i+1 << ": "<<endl;
        c[i] = new country();
        c[i]->get_data();
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        c[i]->sort(c);
    }
    for (int i = 0; i < 5; i++) 
    {
        c[i]->display();
        cout << endl;
    }
    for (int i = 0; i < 5; i++) 
    {
        delete c[i];
    }
    delete [] c;
    return 0;
}
