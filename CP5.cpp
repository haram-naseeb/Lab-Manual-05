#include<iostream>
#include<cmath>
using namespace std;
void value(double a,double b,double c);

main()
{
double a,b,c;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;
cout<<"Enter the value of c: ";
cin>>c;
value(a,b,c);

}

void value(double a,double b,double c)
{
long double root1, root2;
double x;
x=b*b-4*a*c;
if(x>0)
{
root1=(-b+sqrt(x))/2*a;
root2=(-b-sqrt(x))/2*a;
cout<<"Solutions: x= "<<root1<<" and x= "<<root2;
}

else if(x<0)
{
root1=(-b+sqrt(x))/2*a;
root2=(-b-sqrt(x))/2*a;
cout<<"Complex Solutions: x= "<<root1<<" and x= "<<root2;
}

else
{
root1=-b/2*a;
cout<<"Solution: x= "<<root1;
}


}




