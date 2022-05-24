#include <stdio.h>
using namespace std;
#include<iostream>

bool isodd(int n)
{
    if(n&1)
    {
        return 1;
    }

    else
    return 0;
}

int main()
{
   int n,k;
   
   cout<<"Enter a number : ";
   cin>>n;
   k = isodd(n);
   if(k==1)
   {
       cout<<"odd";
       
   }
   else
   cout<<"even";
    return 0;
}
