
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
        int j =1;
        while(j<=(n-i+1))
        {
            cout<<" "<<j;
            j++;
        }
        int z=i-1;
        while(z>=1)
        {
            cout<<" *";
            z--;
        }
        int k=i-1;
        while(k>=1)
        {
            cout<<" *";
            k--;
        }
        int l=n-i+1;
        while(l>=1)
        {
            cout<<" "<<l;
            l--;
        }
        
        
        
        
        
        i++;
        cout<<endl;
    }

    return 0;
}


// Enter numbe of rows : 4
//  1 2 3 4 4 3 2 1
//  1 2 3 * * 3 2 1
//  1 2 * * * * 2 1
//  1 * * * * * * 1
