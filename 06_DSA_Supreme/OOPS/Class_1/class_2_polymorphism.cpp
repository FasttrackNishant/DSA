#include <bits/stdc++.h>
using namespace std;
// =

// ~~~~~function overloading
/*
class Maths
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b *c;
    }
};

int main()
{
    Maths obj;

    cout << obj.sum(2, 5,10);
    return 0;
}

*/

//~~~~~~~~~~operator overloading

/*
class Param
{
public:
    int val;

    void operator+(Param &obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value2 - value1);
    }
};

int main()
{
    Param obj1, obj2;

    obj1.val = 6;
    obj2.val = 29;

    // this should print the difference between them
    obj1 + obj2;
}

*/

//~~~~~~~~~~Runtime Polymorphism

class Animal
{
public:
    void speak()

    {
        cout << "speaking " << endl;
    }

    Animal()
    {
        cout << "I am inside animal constructor " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking " << endl;
    }

    Dog()
    {
        cout << "Inside dog " << endl; 
    }
};

int main()
{
    // Animal a;
    // a.speak();

    // Dynamic Creation

    Animal *a = new Animal;
    a->speak();

    Dog *b = new Dog;
    b->speak();

    // virtual se rhs ka milega like barking
    Animal *c = new Dog;
    c->speak();

    // virtual se rhs ka milega like speaking
    Dog *d = (Dog *)new Animal();
    d->speak();

    return 0;
}
