class Solution {
public:
    string match(string str1,string str2)
    {
        int i=0;
        int j=0;
        string str3="";
        while(i<str1.size() && j<str2.size() )
        {
            if(str1[i]==str2[j])
                str3=str3+str1[i];
            else
                return str3;
            i++;
            j++;
        }
        return str3;
    }
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size()==1)
            return strs[0];
        string s1="";
        s1=s1+match(strs[0],strs[1]);
        for(int i=2;i<strs.size();i++)
        {
            string s2="";
            s2=s2+match(strs[i],s1);
            s1=s2;
        }
        return s1;
    }
};