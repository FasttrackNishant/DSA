#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number " << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
        
    }

    if (isPrime == 0)
    {

        cout << "Not a Prime Number" << endl;
    }
    else
    {

        cout << "Is prime number" << endl;
    }

    return 0;
}