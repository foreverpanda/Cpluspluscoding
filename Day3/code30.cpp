//binary to decimal
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int ans=0,digit,n,i=0;
    cout<<"Enter a decimal number : ";
    cin>>n;
    while(n!=0)
    {
        digit = n%10;
        ans = ans + pow(2,i)*digit;
        n = n/10;
        i++;
    }
    cout<<ans;
    return 0;
}
