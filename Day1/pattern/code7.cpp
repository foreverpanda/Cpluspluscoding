    /*
 Enter number of rows : 4
1111
2222
3333
4444
*/


#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    
    cout<<"Enter number of rows : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j =0;
        while(j<n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    /*
 Enter number of rows : 4
1111
2222
3333
4444


  
*/

}
