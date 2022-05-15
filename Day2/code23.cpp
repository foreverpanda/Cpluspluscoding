
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
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    /*
    Enter numbe of rows : 4
   1
  22
 333
4444


    */
    

    return 0;
}
