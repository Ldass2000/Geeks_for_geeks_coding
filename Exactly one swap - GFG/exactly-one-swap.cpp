// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string S)
    {
        long long sz=S.size();
        vector<long long>h(26,0);
        long long ans=0;
        bool flag=false;
        
        for(long long i=0;i<sz;i++)
        {
            ans+=i-h[S[i]-'a']++;
            if(h[S[i]-'a']>=2)
            {
                flag=true;
            }
        }
        if(flag) ans++;
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends