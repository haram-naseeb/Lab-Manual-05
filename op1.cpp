#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
int number1,number2;
cout<<"Enter number 1: ";
cin>>number1;
cout<<"Enter number 2: ";
cin>>number2;
cout<<"Minimum number: "<<min(number1,number2);
return 0;
}