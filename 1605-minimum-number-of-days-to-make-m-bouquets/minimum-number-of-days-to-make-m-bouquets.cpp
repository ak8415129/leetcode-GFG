class Solution {
public:
bool help(vector<int>& bloomDay, int m, int k ,int guess)
{
    int n=bloomDay.size();
    int count=0;
    int ans=0;
    for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= guess) {
                count++;
                if (count == k) {
                    ans++;
                    count = 0; // Reset for the next bouquet
                }
            } else {
                count = 0; // Sequence broken, reset count
            }
        }
        if(ans>=m)
    return true;

    return false;
} 
int  maximum(vector<int> &piles ,int n)
{
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(maxi<piles[i])
        maxi=piles[i];
    }
    return maxi; 
}
    int  minimum(vector<int> &piles ,int n)
{
    int mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(mini>piles[i])
        mini=piles[i];
    }
    return mini;
} 
    int minDays(vector<int>& bloomDay, int m, int k) {
      int n=bloomDay.size();
      int low=minimum(bloomDay,n);
      int high=maximum(bloomDay,n);
      int ans=-1;
       while(low<=high)
       {
        int guess=(low+high)/2;
        if(help(bloomDay,m,k,guess))
        {
            ans=guess;
            high=guess-1;
        }
       else{
        low=guess+1;
       }

       }  
       return ans;
    }
};