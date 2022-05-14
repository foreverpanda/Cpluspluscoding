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
        int j=i;
        int space = n-i;
        while(space>=0)
        {
            cout<<"   ";
            space--;
        }
        while(j>0)
        {
            cout<<" * ";
            j--;
        }
        cout<<endl;
        i++;
            
    }
    
    
    
    return 0;
    /*
Enter number of rows : 4
             * 
          *  * 
       *  *  * 
    *  *  *  * 

*/

}
