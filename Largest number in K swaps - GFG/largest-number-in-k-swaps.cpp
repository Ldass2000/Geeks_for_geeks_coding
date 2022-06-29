// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
      void solve(string& str, int k, int i, string& ans){
       ans=max(str,ans);
       if(k==0 || i==str.length())
       return;
       char maxi=str[i];
       for(int j=i+1;j<str.length();j++){
           if(maxi<str[j])
               maxi=str[j];
       }
       if(maxi > str[i]){
           for(int j=i+1; j<str.length(); j++){
           if(str[j] == maxi){
           swap(str[j],str[i]);
           solve(str,k-1,i+1,ans);
           swap(str[j],str[i]);
           }
       }
       }
       else
        solve(str,k,i+1,ans);
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
        string ans=str;
        solve(str,k,0,ans);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends