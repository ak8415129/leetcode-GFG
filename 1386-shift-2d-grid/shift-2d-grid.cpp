class Solution {
public:
void Reverse(vector<int>& arr,int k,int n){
	    while(k<n){
	        swap(arr[k++],arr[n--]);
	    }
	}

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
     k %= nums.size();
    Reverse(nums, 0, nums.size() - 1);
    Reverse(nums, 0, k - 1);
    Reverse(nums, k, nums.size() - 1);
    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) { 
        vector<int> nums;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                nums.push_back(grid[i][j]);
            }
        }
        rotate(nums,k);
        int n=nums.size();
        int i=0;
        vector<vector<int>> ans;
        while(i<n)
        { 
            int ct=c;
            vector<int> temp;
           while(ct--)
           {
             temp.push_back(nums[i]);
             i++;
           }  
           ans.push_back(temp);
        } 
        return ans;
    }
};