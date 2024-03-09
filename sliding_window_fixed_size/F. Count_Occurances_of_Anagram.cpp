//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int freq[26] = {0};
        for (char c : pat)
        {
            freq[c - 'a']++;
        }
        int k = pat.length();
        int i = 0, j = 0, n = txt.length();
        int temp[26] = {0};
        int cnt = 0;
        while (j < n)
        {
            temp[txt[j] - 'a']++;
            if (j >= k - 1)
            {
                bool ok = true;
                for (int i = 0; i < 26; i++)
                {
                    if (freq[i] != temp[i])
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    cnt++;
                temp[txt[i] - 'a']--;
                i++;
            }
            j++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends