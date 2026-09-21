class Solution {
public: 
long long sum(vector<int>& candies, int n)
{
    long long res=0;
    for(int i=0; i<n; i++)
    {
        res=res+candies[i];
    }
    return res;
} 
long long minimum(vector<int>& candies, int n)
{
    long long mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(mini>candies[i])
        mini=candies[i];
    }
    return mini;
} 
// bool possible(vector<int>& candies, int n,long long k ,long long guess)
// { 
//     vector<int> extra;
//     int s1=0;
//     for(int i=0; i<n; i++)
//     {
//         if(candies[i]-guess<0)
//         continue;
//         else{
//             s1++;
//             long long ex=candies[i]-guess;
//         }
//     } 
//     for(int i=0; i<extra.size(); i++)
//     {
//         if(extra[i]-guess<0)
//         continue;
//         else
//             s1++;
//     } 
//     if(s1>=k)
//     return true;

//     return false;
// } 
 bool possible(vector<int>& candies, int n, long long k, long long guess)
    {
        long long count = 0;

        for(int i = 0; i < n; i++)
        {
            count += candies[i] / guess;

            if(count >= k)
                return true;
        }

        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        long long mini=minimum(candies,n);
        long long low=1;
        long long high=sum(candies,n);

        int ans=0;
        while(low<=high)
        {
            long long guess=(high+low)/2;
            
               if(possible(candies,n,k,guess))
               {
                ans=guess;
                low=guess+1;
               } 
                
            else{
                
                high=guess-1;
            }
        }
        return ans;
    }
};