#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    
    cout<<"Enter number of rows : ";
    cin>>n;
    int i=0;
    
    while(i<n)
    {
        int j =1;
        
        while(j<=n)
        {char ch =65+i+j-1;
            
            cout<<ch;
            // cout<<"A" +i-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    /*
Enter number of rows : 4
ABCD
BCDE
CDEF
DEFG






*/

}
