class Solution {
public:
    int reverse(int x) { 
        long res = 0;
        while(x != 0)
        {
            int end = x % 10;
            int new_res = res * 10 + end;
            if((new_res - end) / 10 != res)
            {
                return 0;
            }
            else
                res = new_res;
            x /= 10;
        }
        return res;    
    }
};