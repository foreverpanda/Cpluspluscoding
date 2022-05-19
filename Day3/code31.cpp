
#include <iostream>
#include<math.h>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
 
        int ans=0,digit;
        while(x!=0)
        {
            digit = x%10;
            
            if ((ans > INT_MAX/10)||( ans < INT_MIN/10))
            {
                return 0;
            }
            ans = ans*10 + digit;
            x = x/10;
        }
        return ans;
    }
};

int main()
{ int n,b;
   Solution l;
   cout<<"Enter a number : ";
   cin>>n;
   b= l.reverse(n);
    cout<<b;
    return 0;
}
