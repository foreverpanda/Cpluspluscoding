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

int min_array(int arr[], int size)
{
    int mini = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
            
        }
        
    }
    return mini;
}
int main()
{
    int array[6] = {29,63,22,56,11,44} ;
    
    
    int h = min_array(array,6);
    cout<<h;
    
    return 0;
}
