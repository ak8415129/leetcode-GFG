//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int n=str1.size();
        int m=str2.size();
        
      vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        
        int maxi=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(str1[i]==str2[j]){
                    dp[i+1][j+1]=1+dp[i][j];
                    maxi=max(maxi, dp[i+1][j+1]);
                }
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends