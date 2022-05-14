
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
        
        while(j<=i)
        {char ch =65+i-1;
            
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    /*
Enter number of rows : 4
A
BB
CCC
DDDD


*/

}
