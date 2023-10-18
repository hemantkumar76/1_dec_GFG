#include <iostream>
#include <string.h>

using namespace std;

class Solution
{
public:
    void rearrange(long long *arr, int n)
    {

        // Your code here
        int k = 0, j = n - 1, max = arr[n - 1] + 1;

        for (int i = 0; i < n; i += 2)
            arr[i] += (arr[j--] % max) * max;
        for (int i = 1; i < n; i += 2)
            arr[i] += (arr[k++] % max) * max;
        for (int i = 0; i < n; i++)
            arr[i] /= max;
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
