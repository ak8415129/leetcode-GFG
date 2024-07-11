class Solution {
public:
    string reverseParentheses(string s) { 
        string fans="";
        stack<char> st;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==')')
            { 
                string temp="";
                while( !st.empty()&&st.top()!='(')
                {
                   temp+=st.top();
                   st.pop();
                }  
                if(!st.empty())
                st.pop(); 

               for(int j=0; j<temp.length(); j++)
                st.push(temp[j]);
              
            } 
            else{
                st.push(s[i]);
            } 
        } 
            while(!st.empty())
            {
                fans+=st.top();
                st.pop();
            }

         
     reverse(fans.begin(),fans.end()); 
     return fans;
        
    }
};