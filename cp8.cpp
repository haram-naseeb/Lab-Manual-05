#include<iostream>
using namespace std;
string input(int number);

int main()
{
int number;
string result;
cout<<"Enter a five digit numer: ";
cin>>number;
result=input(number);
cout<<result;

}

string input(int number)
{
int a,b,c,d,e;
string result;
a=number/10000;
b=(number%10000)/1000;
c=(number%1000)/100;
d=(number%100)/10;
e=number%10;

if((a+b+c+d+e)%2==0)
{
 result="evenish";
 return result;
}
 
if((a+b+c+d+e)%2!=0)
{
result="oddish";
return result;
}
}