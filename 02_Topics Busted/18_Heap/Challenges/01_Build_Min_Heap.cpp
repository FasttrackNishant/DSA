#include <bits/stdc++.h>
void heapify(vector<int> &arr, int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[smallest] > arr[left])
    {
        smallest = left;
    }
    if (right < n && arr[smallest] > arr[right])
    {
        smallest = right;
    }

    // ab check karlo ki largest update hua hain ya nahi

    if (smallest != i)
    {
        // it means largest is pointing to the right place

        swap(arr[smallest], arr[i]);

        // ab ye toh sahi jagah pe pohch gaya but aage bhi check karlo

        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    return arr;
}
