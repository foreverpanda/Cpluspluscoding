//find sun of all even numbers till n
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i=1,n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {sum = sum+i;
        i=i+1;
        }
        else
        i=i+1;
        
    }
    cout<<sum;
    return 0;
    
}
