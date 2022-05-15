
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
        while(space>=0)
        {
            cout<<" ";
            space--;
        }int j=n-i+1;
        while(j>0)
        {
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
    }
    /*
    Enter numbe of rows : 4
 1111
  222
   33
    4


    */
    

    return 0;
}
