#include <iostream>
#include <string.h>

using namespace std;

class Solution
{
public:
    void rearrange(long long *arr, int n)
    {

        // Your code here
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        ob.rearrange(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}
