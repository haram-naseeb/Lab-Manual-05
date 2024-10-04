#include<iostream>
#include<string.h>
using namespace std;
string timetravel(int hours,int minutes);

int main()
{
int hours,minutes;
string result;
cout<<"Enter Hours: ";
cin>>hours;
cout<<"Enter Minutes: ";
cin>>minutes;
result=timetravel(hours,minutes);
cout<<result;

}


string timetravel(int hours,int minutes)
{
int hh,mm;
string timetravel;
int b,a;
b=hours*60+minutes;
a=b+15;
hh=a/60;
mm=a%60;
timetravel=to_string(hh)+ " : " +to_string(mm);
return timetravel;

}