class Solution {
public:
long long maximum(vector<int> &piles ,int n)
{
    long long maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(maxi<piles[i])
        maxi=piles[i];
    }
    return maxi;
} 
long long gethour(vector<int> &piles ,int n ,int speed)
{
    long long h=0;
    for(int i=0; i<n; i++)
    {
        h=h+piles[i]/speed;

        if(piles[i]%speed!=0)
        h++;
    } 
    return h;
} 
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        long long high=maximum(piles,n); 
       
        int ans=-1;

        while(low<=high)
        {  
            // we are guessing speed as mid 
            long long mid=(low+high)/2;
            long long hour=gethour(piles,n,mid);
            if(hour>h)
            {
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        } 
        return ans;
    }
};