#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float number1, number2;
cout<<"Enter the base number: ";
cin>>number1;
cout<<"Enter th exponent: ";
cin>>number2;
cout<<number1<<" raised to the power "<<number2<<" is "<<pow(number1,number2);
return 0;
}
