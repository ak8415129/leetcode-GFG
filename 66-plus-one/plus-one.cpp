class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { 
        int n=digits.size();  
        vector<int> ans; 
        int carry=1;
        for(int i=n-1; i>=0; i--)
        {
            int sum=digits[i]+carry; 
            
            if(sum>9)
            { 
            carry=1; 
             sum=sum%10;
            }
            else
            carry=0;


        //     if(sum==10)
        //     { 
        //      carry=1; 
        //      sum=sum%10; 
        //       ans.push_back(sum);
        //      ans.push_back(1);
        //     } 
        //     else
            ans.push_back(sum);
         } 
       
       if(carry==1)
       ans.push_back(carry);
       reverse(ans.begin(),ans.end());

       return ans;
        
    }
};