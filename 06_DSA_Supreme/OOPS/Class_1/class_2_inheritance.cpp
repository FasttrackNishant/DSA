#include <bits/stdc++.h>
using namespace std;
// =
/*
class Animal
{
public:
    int age;
    int weight;

    void eat()
    {
        cout << "Eating " << endl;
    }
};

// child class

class Dog : public Animal
{
};
int main()
{
    Dog d1;
    d1.eat();
    return 0;
}
*/

//~~~~~~~~~~ using chart patterns

class Animal
{
public:
    int age;
};

// child class

class Dog : private Animal
{

public:
    void print()
    {
        cout << this->age << endl;
    }
};
// int main()
// {
//     Dog d1;
//     // cout << d1.age << endl;
//     d1.print();
//     return 0;
// }

//~~~~~~~single inheritance
/*
class Car
{
public:
    string name;
    int weight;
    int age;

    void speedup()
    {
        cout << "speeding up" << endl;
    }

    void breakmaro()
    {
        cout << "Break mar diya " << endl;
    }
};

class Scorpio : public Car
{
};
// this is pure example of single level inheritance


*/

//~~~~~~~multi level inheritance
/*
class Fruit
{
public:
    string name;
};

class Mango : public Fruit
{
public:
    int weight;
};

class Alphanso : public Mango
{
public:
    int sugarlevel;
};

int main()
{
    Alphanso a;


    cout << a.name << " " << a.weight << endl;
    return 0;
}

*/

// ~~~~~~~~Multiple Inheritance

/*
class A
{
public:
    int physics;
    int chemistry;

    A()
    {
        chemistry = 100;
    }
};

class B
{
public:
    int chemistry;

    B()
    {
        chemistry = 500;
    }
};

class C : public A, public B
{

public:
    int maths;
};

int main()
{
    C obj;

    // cout << obj.physics << " " << obj.chemistry << " " << obj.maths << endl;
    cout << obj.A::chemistry << " " << obj.B::chemistry << " " << obj.maths << endl;
}


*/

//~~~~~~~~~Hierarchical Inheritance

class Car
{
public:
    int age;
    int weight;

    void speedUp()
    {
        cout << "speeding up " << endl;
    }
};

class Scorpio : public Car
{
};

class Fortuer : public Car
{
};

int main()
{
    Scorpio obj;
    obj.speedUp();

    Fortuer f11;
    f11.speedUp(); 
}