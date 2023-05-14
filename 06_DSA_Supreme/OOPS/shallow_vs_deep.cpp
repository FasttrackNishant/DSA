#include <iostream>
using namespace std;

class abc
{

public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y))
    {
    }

    default dumb copy constructor
     abc ( const abc &obj)
     {
         x = obj.x;
         y = obj.y;
     }


    // // deep copy constructor
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = new int(*obj.y);
    // }

    void print() const
    {
        cout << "x : " << x << endl;
        cout << "p: " << y << endl;
        cout << "*y: " << *y << endl;
    }

    // destructor

    ~abc()
    {
        delete y;
    }
};

int main()
{ /*
     abc a(1, 2);
     a.print();

     abc b(a); // copy constructor call hota hain
     b.print();
     *b.y = 20;
     b.print();

     cout << "a after change " << endl;
     a.print();

     */

//iske liye dumb copy constructor call karo 

    abc * a = new abc(1,2);
    abc b = *a ;
    delete a; 

    return 0;
}