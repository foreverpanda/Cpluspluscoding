#include <stdio.h>
using namespace std;
#include<iostream>

int main()
{
   int n;
   cin>>n;
   
   int temp = ~n;
   
   if (n==0)
   return 1;
    int mask = 0;  
   while(n!=0)
   {
       mask = mask <<1;
        mask = (mask|1);
       
        n = n>>1;
   }
   temp = temp & mask;
   cout<<temp;
    return 0;
}
