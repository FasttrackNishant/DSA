#include <iostream>
using namespace std;

class Box
{
    int width;

    Box(int _w) : width(_w){};

public:
    int getWidth() const
    {
        return width;
    }

    void setWidth(int _val)
    {
        width = _val;
    }

    friend class Boxfactory;
};

class Boxfactory
{
    int count;

public:
    Box getABox(int _w)
    {
        ++count;
        return Box(_w);
    }
};
int main()
{
    // Box b(5);// ye work nahi karega

    Boxfactory bfact;
    Box b = bfact.getABox(5);
    cout << b.getWidth() << endl;

    cout << b.getWidth() << endl;
}