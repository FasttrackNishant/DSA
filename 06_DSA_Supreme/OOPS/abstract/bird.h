#if !define (BIRD_H)
#define BIRD_H
#include <iostream> 

class Bird 
{
    public:
    virtual void eat() =0;
    virtual void fly() = 0; 
//ye ek interface hain iska existence nahi  hain baki birds isko use kargene


}

class sparrow: public Bird()
{
    public:
     void eat()
     {
        std::cout<<"sparrow is eating "<<endl;
     }
     void fly()
     {
        std:: cout<<"sparrow is flying " <<endl;
     }

}
class Eagle : public Bird()
{
    public:
     void eat()
     {
        std::cout<<"eagle is eating "<<endl;
     }
     void fly()
     {
        std:: cout<<"eagle  is flying " <<endl;
     }

}

#endif