/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
using namespace std;
#include<iostream>

int main()
{
   int money;
   
   cout<<"Enter amount : ";
   cin>>money;
   switch (1){
   
   case (1):
   {cout << "100 : "<<money/100;
   money = money%100;
   
   cout<<endl;
   }
   
   case(2):
   {cout<<" 50 : "<<money/50;
   money = money%50;
   cout<<endl;
   }
  
  case(3):
  {
      cout<<"1 : "<<money/1;
      money = money%1;
  }}
    return 0;
}
