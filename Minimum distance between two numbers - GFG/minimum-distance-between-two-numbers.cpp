// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int idX=-1,idY=-1;
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(x==a[i]) idX=i;
            if(y==a[i]) idY=i;
            if(idX!=-1 && idY!=-1)
            {
                if(abs(idX-idY)<min)
                min=abs(idX-idY);
            }
        }
        
        if(idX==-1 || idY==-1) return -1;
        return min;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends