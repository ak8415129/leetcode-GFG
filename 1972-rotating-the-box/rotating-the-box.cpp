class Solution {
public: 
vector<vector<char>> transpose(vector<vector<char>>& t)
{
    int n = t.size();
    int m = t[0].size();

    vector<vector<char>> temp(m, vector<char>(n));

    for(int i = 0; i < n; i++)
    {    
        for(int j = 0; j < m; j++)
        {
            temp[j][i] = t[i][j];  
        }
    } 

    return temp;
} 
void reverse(vector<vector<char>> &t,int n ,int m)
{
    for(int i=0; i<n; i++)
    {
        int s=0 ,e=m-1;
        while(s<e)
        {
            char tt=t[i][s];
            t[i][s]=t[i][e];
            t[i][e]=tt;
            s++;
            e--;
        }
    }
}
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) { 
        vector<vector<char>> ans;
        vector<vector<char>>temp=transpose(boxGrid); 
         int n=temp.size();
    int m=temp[0].size(); 

    reverse(temp,n,m);
    // for(int i = 0; i < n; i++)
    // {    
    //      for(int j = 0; j < m; j++)
    //        cout<<temp[i][j]; 

    //         cout<<endl;
    // } 
//    
for(int j = 0; j < m; j++)
{
    int empty = n - 1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(temp[i][j] == '*')
        {
            empty = i - 1;
        }
        else if(temp[i][j] == '#')
        {
            swap(temp[i][j], temp[empty][j]);
            empty--;
        }
    }
}
    ans=temp;

        return ans;


        
    }
};