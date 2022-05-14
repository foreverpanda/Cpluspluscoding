//to check whether entered character is number or alphabet

#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter character : ";
    cin>>ch;
    
    
    if (isalpha(ch))
    {
        if(isupper(ch))
        cout<<"Entered characted is Alphabet and is Uppercase";
        else
        cout<<"Entered characted is Alphabet and is Lowercase";
    }
    else if (isdigit(ch))
    {
        cout<<"Entered characted is a Number";
    }
    else
    cout<<"It is an special character or invalid";
    
    return 0;
    
}

