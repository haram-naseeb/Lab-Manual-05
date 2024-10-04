#include<iostream>
#include<string>
using namespace std;
string number(int n);

int main()
{
int n;
string result;
cout<<"Enter number (1-25): ";
cin>>n;
result=number(n);
cout<<result;
}

string number(int n)
{
string value;
if(n==1)
{ value="one";
return value;
}
if(n==2)
{ 
value="two";
return value;
}
}