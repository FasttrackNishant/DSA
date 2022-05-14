#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {2, 5, 6};
    cout << "address of first memory block : " << arr << endl;
    cout << &arr[0] << endl;
    // down thre wil print value at 0
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(&arr[0]) << endl;
    //    (*arr)++;
    cout << *arr << endl;

    //~~ below two is the formula
    cout << *(arr + 1) << endl; // value at index 1
    cout << arr[1];
    //~~

    cout<<"new method "<<endl;
    


    return 0;
}