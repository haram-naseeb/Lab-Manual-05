#include<iostream>
using namespace std;
string checkalphabetcase(string character);
int main()
{
string character,result;
cout<<"Enter a character (A/a): ";
cin>>character;
result=checkalphabetcase(character);
cout<<result;
}

string checkalphabetcase(string character)
{
string result;
if(character=="A")
  {result="You have entered capital A";
  return result;}
if(character=="a")
  {result="You have entered small a";
  return result;}
}