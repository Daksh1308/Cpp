/* Write a class Box to draw a rectangle. Derive a class NewBox
to add a data member character. Use this character and draw a
particular shape instead of lines. */


#include <iostream>
using namespace std;
class box 
{
    protected:
    int width;
    int height;
    public:
    box(int w = 0, int h = 0) 
    {
        width = w;
        height = h;
    }
    void draw();
};
void box:: draw()
{
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++) 
        {
            if (i == 0 || i == height-1 || j == 0 || j == width-1) 
            {
                cout << "-";
            } else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
class newbox : public box 
{
    private:
    char ch;
    public:
    newbox(char c = '*', int w = 0, int h = 0) : box(w, h) 
    {
        ch = c;
    }
    void draw();
};
void newbox::draw() 
{
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++) 
        {
            if (i == 0 || i == height-1 || j == 0 || j == width-1) 
            {
                cout << ch;
            } else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main() 
{
    box b(5, 5);
    b.draw();
    newbox nb('*', 5, 5);
    nb.draw();
    return 0;
}