class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int cnto=0; 
        int cntz=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            cntz++;
            if(arr[i]==1)
            cnto++;
        } 
        int cntt=n-(cnto+cntz);  
        
        int i=0;
        
      while (cntz > 0) {
        arr[i++] = 0;
        cntz--;
    }
 
    
    while (cnto > 0) {
        arr[i++] = 1;
        cnto--;
    }
 
    
    while (cntt > 0) {
        arr[i++] = 2;
        cntt--;      
    } 
    }
};