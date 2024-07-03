/* 10. Create class string with the data member as char str[20],
Use constructors and destructors properly and write member
functions for each of the following
l. To get the data
m. To display the data
n. To concatenate two string objects */


#include <iostream>
#include <cstring>
using namespace std;

class str
{
public:
    char sr[40]; // Ensure enough space for concatenation
    void get_data();
    void add(str sr[]);
    void display();
    str(); // Constructor to initialize sr
    ~str(); // Destructor to clean up resources
};

str::str()
{
    sr[0] = '\0'; // Initialize sr as an empty string
}

void str::get_data()
{
    cout << "Enter string: ";
    cin >> sr;
}

void str::add(str sr[])
{
    strcat(sr[0].sr, sr[1].sr); // Concatenate sr[1] into sr[0]
}

void str::display()
{
    cout << "Concatenated string: " << sr << endl;
}

str::~str()
{
    // Destructor, not needed for this implementation
}

int main()
{
    str s[2];

    // Input strings
    for (int i = 0; i < 2; i++)
    {
        s[i].get_data();
    }

    // Concatenate strings
    s[0].add(s);

    // Display concatenated string
    s[0].display();

    return 0;
}
