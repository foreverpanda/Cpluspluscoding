    /*
Enter number of rows : 4
1234
1234
1234
1234
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
        int j =1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;


}
