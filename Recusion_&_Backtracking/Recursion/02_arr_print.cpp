#include <iostream>
using namespace std;

void print(int arr[], int index, int size)
{
    // base case
    if (index == size)
        return;

    cout << arr[index] << " "<<index<<","<<endl;
    print(arr, ++index, size);
}

int main()
{
    int arr[5] = {1, 2, 5, 6, 3};
    print(arr,0,5);
    return 0;
}