#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int arr1[8] = {2, 3, 5, 9, 40, 50, 70, 100};

    // cout << "The given array is " << endl;
    // printarray(arr1, 8);
    int key;
    cout << "Enter the element in the array to be find" << endl;
    cin >> key;

    // int arrindex = linearsearch(arr1, 8, key);
    int arrindex = binarysearch(arr1, 8, key);

    cout << "The element " << key << " is found at index " << arrindex;

    return 0;
}