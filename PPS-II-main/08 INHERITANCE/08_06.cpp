/* Modify above program with two base classes. One as publication
and create another sales (member totalsales). Now, Derive two
classes books (member page_count), tape(member mins) from
publication and sales. Use necessary constructors, destructors and
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
    publication(string t, float p);
    void get_data();
    void display();
};
publication::publication() 
{
    title = " ";
    price = 0.0;
}
publication::publication(string t, float p) 
{
    title = t;
    price = p;
}
void publication::get_data() 
{
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter price: ";
    cin >> price;
}
void publication::display()
{
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
}
class sales 
{
    private:
    float totalsales;
    public:
    sales();
    sales(float ts);
    void get_data();
    void display();
};
sales::sales() 
{
    totalsales = 0.0;
}
sales::sales(float ts) 
{
    totalsales = ts;
}
void sales::get_data() 
{
    cout << "Enter total sales: ";
    cin >> totalsales;
}
void sales::display()
{
    cout << "Total sales: " << totalsales << endl;
}    
class books : public publication, public sales 
{
    private:
    int page_count;
    public:
    books();
    books(int pc);
    void get_data();
    void display();
};
books::books() 
{
    page_count = 0;
}
books::books(int pc) 
{
    page_count = pc;
}
void books::get_data() 
{
    publication::get_data();
    sales::get_data();
    cout << "Enter number of pages: ";
    cin >> page_count;
}
void books::display()
{
    publication::display();
    sales::display();
    cout << "Number of pages: " << page_count << endl;
}
class tape : public publication, public sales 
{
    private:
    float mins;
    public:
    tape();
    tape(float m);
    void get_data();
    void display();
};
tape::tape() 
{
    mins = 0.0;
}
tape::tape(float m) 
{
    mins = m;
}
void tape::get_data() 
{
    publication::get_data();
    sales::get_data();
    cout << "Enter playing time in minutes: ";
    cin >> mins;
}
void tape::display() 
{
    publication::display();
    sales::display();
    cout << "Playing time (mins): " << mins << endl;
}
int main() 
{
    books b;
    tape t;
    cout << "Enter data for book: " << endl;
    b.get_data();
    cout << "Enter data for tape: " << endl;
    t.get_data();
    cout << "Book data: " << endl;
    b.display();
    cout << "Tape data: " << endl;
    t.display();
    return 0;
}