*/
  * * * *
  * * * *
  * * * *
  * * * *
  
*/



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
    {   int j=0;
        while(j<n)
        {
            cout<<"*"<<" ";
            j++;    
        }
        i++;
        cout<<endl;
    }
    return 0;
    
}
