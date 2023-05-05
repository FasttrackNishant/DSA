#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    int weight;

public:
    // state properties
    int age;
    string name;
    string type;

    // Constructor

    Animal()
    {
        this->weight = 0;
        this->age = 0;
        cout << "constructor Called " << endl;
    }
    Animal(int age)
    {
        this->weight = 0;
        this->age = 0;
        cout << "parameterized 1 constructor Called " << endl;
    }
    Animal(int age, int weight)
    {
        this->weight = 0;
        this->age = 0;
        cout << " parameterized 2 constructor Called " << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;

        cout << "copy constructor calling" << endl;
    }

    // behaviour
    void eat()
    {
        cout << "Eating " << endl;
    }

    int getWeight()
    {
        return weight;
    }

    void setWeight(int w)
    {
        weight = w;
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->type << endl;
    }

    // destructor

    ~Animal()
    {
        cout << "I am inside destructor " << endl;
    }
};

int main()
{
    /*

        // cout << sizeof(Animal) << endl;

        // two types of object declartion

        // static

        Animal Ramesh;
        Ramesh.age = 12;
        Ramesh.name = "Lion";
        cout << Ramesh.age << endl;
        cout << Ramesh.name << endl;

        // functin calling
        Ramesh.eat();

        // getters & setters

        Ramesh.setWeight(100);
        cout << "Ramesh weight is " << Ramesh.getWeight() << endl;

        cout << "Dynamically Allocated Memory" << endl;

        Animal *suresh = new Animal;
        //  suresh.age = 15; // ye nahi chalega

        (*suresh).age = 15;
        suresh->age = 20;

        suresh->eat();

        // // constructors
        // Animal a(10);
        // Animal *b = new Animal(10, 200);

        // // object copy

        // Animal c = a;
        // // Animal d(b);
        // Animal animal(c);

        Animal a;
        a.age = 20;
        a.setWeight(101);
        a.type = "help";

        // ab isko copy karte hain b mein

        Animal b = a;

        a.print();
        b.print();

        a.type[0] = 'K';

        a.print();
    */

    Animal s;
    s.age = 10;

    Animal *b = new Animal();
    b->age = 12;
    delete b;

    return 0;
}