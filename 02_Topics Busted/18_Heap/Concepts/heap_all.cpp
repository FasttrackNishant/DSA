#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            // calculate parent index

            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {

            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromHeap()

    {

        if (size == 0)
        {
            cout << "Nothing to delete add first " << endl;
        }

        // ab last node ko root pe le jao
        // step 1;

        arr[1] = arr[size];
        size--;

        // ab root node ko right place pe le ke jao

        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            // ab comapare kar lo

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    // ab check karlo ki largest update hua hain ya nahi

    if (largest != i)
    {
        // it means largest is pointing to the right place

        swap(arr[largest], arr[i]);

        // ab ye toh sahi jagah pe pohch gaya but aage bhi check karlo

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    { // step 1 swap karde
        swap(arr[size], arr[1]);
        size--;

        // ab usko correct positino pe bhej
        heapify(arr, size, 1);
    }
}

int main()
{

    heap h;
    cout << " Printing the heap" << endl;
    h.insert(50);
    h.insert(60);
    h.insert(52);
    h.insert(70);
    h.insert(65);

    h.print();
    h.deletefromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "printing the array now " << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // heap sort

    heapSort(arr, n);
    /*
    yaha haume equal to 1 karna hoga in the casing */
    cout << "Prinitng heap sort " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}