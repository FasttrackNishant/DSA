#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *ptr = &num;

int **ptr2 =&ptr;
    cout <<ptr<<endl;
    cout <<ptr2<<endl;
    //ptr2 will store the address of ptr 

    //to print the value of i
    cout<<num<<endl;
    cout<<*ptr<<endl;
    cout<<**(ptr2)<<endl;

    //to print 2nd value
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    return 0;
}