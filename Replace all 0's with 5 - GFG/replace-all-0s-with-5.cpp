// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    string ans=to_string(n);
    for(int i=0;ans[i]!='\0';i++)
    {
        if(ans[i]=='0') ans[i]='5';
    }
    return stoi(ans);
}