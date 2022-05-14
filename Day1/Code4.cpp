//farenheit to celcius 
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    double n,temp;
    cout<<"Enter temp in Farenheit : ";
    cin>>n;
    temp = ((n-32)*5/(9));
    cout<<"Temp in celcius is : "<<temp;
    return 0;
    
}
