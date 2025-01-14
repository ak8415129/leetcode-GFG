class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) 
    {
       
        int size=A.size();
        
        vector<int> temp(size+1,2); 
        vector<int> res;
        
        for(int i=0; i<size; i++)
        {
            temp[A[i]]--;
            temp[B[i]]--;
            int count=0;
            for(int j=1; j<=size; j++)
            {
                if(temp[j]==0)
                {
                    count++;
                } 
               
            } 
             res.push_back(count);
        }
        
        return res;
    }
};