//  Better

int print2largest(int arr[], int n)
{

    if (n == 0 || n == 1)
        return -1;

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
}

// optimal

int print2largest(int arr[], int n)
{

    if (n == 0 || n == 1)
        return -1;

    int largest = arr[0];
    int s_largest = -1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > s_largest && arr[i] != largest)
        {
            s_largest = arr[i];
        }
    }

    return s_largest;
}
