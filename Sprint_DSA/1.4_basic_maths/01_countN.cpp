//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

    int evenlyDivides(int N)
    {
        int temp = N;
        int cnt = 0;

        while (N != 0)
        {
            int rem = N % 10;

            if (rem != 0 && temp % N == 0)
                cnt++;

            temp = temp/10;
        }
        return cnt;
    }


//{ Driver Code Starts.
int main()
{
cout<<evenlyDivides(23);
    return 0;
}
// } Driver Code Ends