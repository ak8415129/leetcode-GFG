class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int count=0;
        for(int i=0; i<details.size(); i++)
        {
            int f=details[i][11]-'0';
            int s=details[i][12]-'0';
          cout<<f<<endl;
            if(f>5)
            {
                if(f==6 && s==0)
                {
                  continue;
                } 
                else{
                    count++;
                }
            }
        } 
        return count;
    }
};