// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n<3) return -1;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
        }
        
        for(int i=1;i<3;i++)
        {
            pq.pop();
        }
        return pq.top();
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends