#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        long prod = 1;
        int count = 0;
        for (int i = 1; i <= N; i++)
        {
            prod *= i;
            if (prod % 10 == 0)
                count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int N = 5;
        // cin >> N;
        Solution ob;
        int ans = ob.trailingZeroes(N);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends