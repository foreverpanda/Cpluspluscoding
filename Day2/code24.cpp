
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
        int space = i-1;
        while(space>=1)
        {
            cout<<" ";
            space--;
        }int j=n-i+1;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    /*
    Enter numbe of rows : 4
4321
 321
  21
   1

    */
    

    return 0;
}
