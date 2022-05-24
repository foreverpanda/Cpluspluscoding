
#include <stdio.h>
using namespace std;
#include<iostream>

int powerof(int a,int b)
{
    int i ;
    int ans = 1;
    
    for(i=1;i<=b;i++)
    {
        
        ans = ans*a;
    }
    
    return ans;
}

int main()
{
   int a,b,k;
   
   cout<<"Enter a number : ";
   cin>>a;
   cout<<"Enter a power : ";
   cin>>b;
   k = powerof(a,b);
   cout<<"power of "<<a<<"^"<<b<<" is : "<<k;
    return 0;
}
