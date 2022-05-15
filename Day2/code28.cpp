#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{

    int n;
    int a=0;
    int b=1;
    int sum;
    cout<<"Enter n : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i =0;i<=n;i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
    return 0;
}
