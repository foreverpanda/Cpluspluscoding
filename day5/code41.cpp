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
    
    cout<<"Alternate swapped is : ";
   int l,m;
    for(l=0,m=1;m<size;)
    {
        int temp = array[l];
        array[l]=array[m];
        array[m]=temp;
      l=l+2;
      m=m+2;
    }
    for(int k =0;k<size;k++)
    {
        cout<<array[k];
    }    
    cout<<endl;
    
    return 0;
}
