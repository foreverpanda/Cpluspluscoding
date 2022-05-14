#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    
    cout<<"Enter number of rows : ";
    cin>>n;
    int i=1;
    
    while(n>=i)
    {
        int j=1;
        while(j<=n)
        {
            cout<<" * ";
            j++;
        }
        n--;
        cout<<endl;
    
    }
    
    
    
    return 0;
    /*
Enter number of rows : 4
 *  *  *  * 
 *  *  * 
 *  * 
 * 


*/

}
