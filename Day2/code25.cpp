
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter numbe of rows : ";
    cin>>n;
    while(i<=n)
    {
        int space = n-i;
        while(space>=1)
        {
            cout<<" ";
            space--;
        }int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int k=i-1;
        while(k>0)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
        
    }
    /*
 Enter numbe of rows : 4
   1
  121
 12321
1234321

    */
    

    return 0;
}
