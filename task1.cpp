#include<iostream>
using namespace std;
void add(int number1, int number2);
int main()
{
int number1, number2;
cout<<"Enter number1: ";
cin>>number1;
cout<<"Enter number2: ";
cin>>number2;
add(number1, number2);

return 0;
}
void add(int number1, int number2)
{
cout<<"sum:"<< number1+number2;
}