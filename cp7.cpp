#include<iostream>
using namespace std;
string input(int number);
int main()
{
int number,ans;
string result;
cout<<"Enter a 3 digit number: ";
cin>>number;
result=input(number);
cout<<result <<endl;


}

string input(int number)
{
string result;
float firstdigit=number/100;
float lastdigit=number%10;
if(firstdigit==lastdigit)
  {
   result="The number is symmetrical";
   return result;
  }
else
{
  result="The number is not symmetrical";
  return result;
}
}