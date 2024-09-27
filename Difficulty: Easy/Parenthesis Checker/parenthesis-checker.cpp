//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here 
        int n=x.size();
        stack<char> st;
        for(int i=0; i<n; i++)
        {
            if(!st.empty())
            {
                if(st.top()=='[' && x[i]==']')
                {
                    st.pop();
                } 
                 else if(st.top()=='{' && x[i]=='}')
                {
                    st.pop();
                    
                }  
                else if(st.top()=='(' && x[i]==')')
                {
                    st.pop();
                } 
                else
                {
                    st.push(x[i]);
                }
            } 
            else{
                st.push(x[i]);
            }
        } 
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends