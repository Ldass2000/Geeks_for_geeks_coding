// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {
        
        // Tabulation (Bottom-Up)
    //      vector <vector<long long>> dp(m+1, vector<long long>(n+1, 0));
    //     for(int i=0; i<=m; i++)
    //         dp[i][0] = 1;
         
    //     for(int i=1; i<=m; i++)
    //     {
    //         for(int j=0; j<=n; j++)
    //         {
    //             if(j >= S[i-1])
    //                 dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
    //             else
    //                 dp[i][j] = dp[i-1][j];
    //       }
    //   }
    //   return dp[m][n];
        

        // code here.
        //Most Optimal
         vector <long long int> dp(n+1, 0);
        dp[0] = 1;
        for(int i=0; i<m; i++)
            for(int j=S[i]; j<=n; j++)
                dp[j] += dp[j-S[i]];
        return dp[n];
    }
};




// Recursion
// long long int dfs(int S[], int m, int n){
//         if(n == 0)
//             return 1;
//         if(n <  0 || m <= 0)
//             return 0;
//         return dfs(S, m-1, n) + dfs(S, m, n-S[m-1]);
//     }
//     long long int count(int S[], int m, int n) {
//         return dfs(S, m, n);
//     }



// Memoization (Top-Down)
// long long int dfs(int S[], int m, int n, vector<vector<long long>> &dp){
//         if(n == 0)
//             return 1;
//         if(n <  0 || m <= 0)
//             return 0;
//         if(dp[m][n])
//             return dp[m][n];
//         return dp[m][n] = dfs(S, m-1, n, dp) + dfs(S, m, n-S[m-1], dp);
//     }
//     long long int count(int S[], int m, int n) {
//         vector <vector<long long>> dp(m+1, vector<long long>(n+1, 0));
//         return dfs(S, m, n, dp);
//     }



// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends