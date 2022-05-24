class Solution {
public:
    bool isPowerOfTwo(int n) {
       int i;
        int num = 1;
    for (i = 0 ;i<=30;i++)
    {
        if(num == n )
        return true;
        if(num < INT_MAX/2)
        num=num*2;
        
        
        
      }
                     return false;
   
    }};
