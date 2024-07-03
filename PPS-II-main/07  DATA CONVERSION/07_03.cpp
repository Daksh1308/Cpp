/* Write a program to perform following operations on distance
calss. 1)d1 = 2.0 and 2) float m = d1 */


#include <iostream>
using namespace std;
class dist
{
    private:
    float meters;
    public:
    dist(float meters = 0.0)
    {
        this->meters = meters;
    }
    void setMeters(float meters) 
    {
        this->meters = meters;
    }
    float getMeters() const 
    {
        return meters;
    }
    operator float() const 
    {
        return meters;
    }
};
int main() 
{
    double d;
    dist d1(2.0);
    cout << "d1 = " << (float)d1 << " meters." << endl;
    float m = d1;
    cout << "m = " << m << " meters." << endl;
    return 0;
}
