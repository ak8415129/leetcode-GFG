//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here 
        int i=0,sum=0,cnt=0;
        while(i<str.length()){
            if(i>0 and str[i]=='.' and str[i-1]=='.') return false;
            else if(str[i]=='.') {
                sum=0;
                cnt++;
            }
            else {
                sum=sum*10+(str[i]-'0');
                if(sum>255 or (sum==0 and str[i+1]!='.')) return false;
            }
            i++;
        }
        return cnt==3;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends