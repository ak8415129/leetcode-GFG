//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here 
        int sum=0;
        while(n)
        {
            int r=n%10;
            sum+=r;
            n=n/10;
        } 
        string st=to_string(sum);
        int i=0 ,j=st.size()-1;
        while(i<=j)
        {
            if(st[i]!=st[j])
            {
                return 0;
            } 
            i++;
            j--;
        } 
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends