//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &arr) {
        // code here 
         unordered_map<int , int> mp;
       
       int i =0 , j = -1, tem =0, ans =0 , n = arr.size();
       
       for(i=0; i<n ; ++i){
          
           if(!mp[arr[i]] || mp[arr[i]]-1 < j ){
               mp[arr[i]] = i+1;
               ++tem;
               ans = max(ans , tem);
           }else{
               j = mp[arr[i]];
               tem = i-j+1;
               mp[arr[i]] = i+1;
           } 
       }
       
       
       return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends