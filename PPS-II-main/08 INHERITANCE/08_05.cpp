/* Create a class publication with title and price. Use necessary
constructors, destructors and functions. Derive two classes books
(member page_count), tape(member mins). Write necessary
functions. */


#include <iostream>
#include <cstring>
using namespace std;
class publication
{
    private:
    string title;
    float price;
    public:
    publication();
    void get_data();
    void display();
    ~publication();
};
publication::publication(){}
void publication::get_data()
{
	cout << "Title: ";
	cin >> title;
	cout << "Price: ";
	cin >> price;
}
void publication::display()
{
	cout << "The publication title: " << title << endl;
	cout << "The Publication price: " << price<<endl;
}
publication::~publication(){}
class book :public publication
{
    private:
	int pg;
    public:
    book();
    void get_data();
    void display();	
    ~book();
};
book::book(){};
void book::get_data()
{
	publication::get_data();
	cout << "Enter Book Page Count: ";
	cin >> pg;
}
void book::display()
{
	publication::display();
	cout << "Book page count: " << pg << endl;
}
book::~book(){};
class tape :public publication
{
    private:
    float min;
    public:
	tape();
	void get_data();
    void display();
    ~tape();
};
tape::tape(){}
void tape::get_data()
{
	publication::get_data();
	cout << "Enter tape playing time: ";
	cin >> min;
}
void tape::display()
{
	publication::display();
	cout << "Tape's playing time: " << min << endl;
}
tape::~tape(){}
int main(void)
{
	book b;
	tape t;
	b.get_data();
	t.get_data();
	b.display();
	t.display();
	return 0;
}