class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        unordered_map<int,int> mp1 ,mp2,mp;
        int n=A.size();
        for(int i=0; i<n; i++)
        { 
            mp1[A[i]]++;
            mp2[B[i]]++;
            if(mp1.find(B[i])!=mp1.end())
            {
                mp[B[i]]++;
                
            }
             if(mp2.find(A[i])!=mp2.end())
            {
                mp[A[i]]++;
                
            } 
            

            int sz=mp.size();
            ans.push_back(sz);
        } 
        return ans;
    } 
};