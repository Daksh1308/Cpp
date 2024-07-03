/* Explain Friend function and its characteristics. Define a class
matrix with an integer array of 3X3 as a data member. Define a
friend function which adds two matrix objects and returns resultant
matrix object. */

#include <iostream>
#include <iomanip>
using namespace std;
class matrix
{
    int p[3][3];
    public:
    void get_data();
    friend void add(matrix &,matrix &);
    void display(void);
};
void matrix :: get_data()
{
    cout<<"Matrix: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>p[i][j];
        }
    }
}
void matrix :: display(void)
{
    cout<<"Matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<setw(5)<<p[i][j];
        }
    cout<<endl;
    }
}
 
void add(matrix &a,matrix &b)
{
    int result[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=a.p[i][j]+b.p[i][j];
            cout<<setw(5)<<result[i][j];
        }
    cout<<endl;
    }
}
int main()
{
    matrix m[2];
    for (int i = 0; i < 2; i++)
    {
        m[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        m[i].display();
    }
    cout<<"Addition: "<<endl;
    add(m[0],m[1]);
    return 0;
}