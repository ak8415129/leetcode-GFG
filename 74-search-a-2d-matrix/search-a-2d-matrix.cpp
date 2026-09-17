class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { 
        int n=matrix.size();
        int m=matrix[0].size(); 

   if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int low=0 ,high=n-1;
        int row=-1;
        while(low<=high)
        {
            int guess=(low+high)/2;

            if(matrix[guess][0]<=target)
            {
                row=guess;
                low=guess+1;
            } 
            else
            high=guess-1;
        }  

         if (row == -1) {
            return false;
        }
        low=0 ,high=m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(matrix[row][mid]==target)
            return true;
            else  if(matrix[row][mid]>target)
            high=mid-1;
            else
            low=mid+1;
        } 
        return false;
    }
};