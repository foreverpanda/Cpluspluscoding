//prime or not
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    
    cout<<"Enter a number : ";
    cin>>n;
    int flag=0;
    int i =2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Non prime";
            flag=1;
            break;
        }
        else
        i++;
        
    }
    if(flag == 0)
    cout<<"Prime";
    return 0;
    
}
