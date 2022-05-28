/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<climits>
using namespace std;

int sum_array(int arr[], int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
        
    }
    return sum;
}
int main()
{
    int size;
    int array[6] = {29,63,22,56,11,44} ;
    
    cout<<"Enter size of array : ";
    cin>>size;
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter element number "<<i+1<<" : ";
        cin>>array[i];
    }
    int h = sum_array(array,size);
    cout<<"Sum is : "<<h;
    
    return 0;
}
