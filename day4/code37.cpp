
#include <stdio.h>
using namespace std;
#include<iostream>

int fact(int n)
{
    int facto = 1;
    for(int i =1;i<=n;i++)
    {
        facto = facto*i;
        
    }
    // cout<<facto;
    return facto;
}
int ncr(int n,int r)
{
    
    int ans;
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    
    cout<<"num : "<<num<<endl;
    cout<<"Den : "<<den<<endl;
    
    
    
    return num/den;
}

int main()
{
   int a,b,k;
   
   cout<<"Enter n number : ";
   cin>>a;
   cout<<"Enter r : ";
   cin>>b;
  k = ncr(a,b);
// k = fact(a);
   cout<<k;
    return 0;
}
