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
#include<math.h>

int main()
{   
    int size;
    int array[20];
    
    cout<<"Enter size : ";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        cout<<"Enter element : ";
        cin>>array[i];
        
    }
    cout<<"Entered array is : ";
    for(int i =0;i<size;i++)
    {
        cout<<array[i];
    }    
    cout<<endl;
    cout<<"reversed array is : ";
    int i,j;
    for( i=0, j =size-1;i<=j;i++,j--)
    {
        
        int temp = array[i];
        array[i]=array[j];
        array[j] = temp;
    }
     for(int i =0;i<size;i++)
    {
        cout<<array[i];
    }    
    
    return 0;
}
