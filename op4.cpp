#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float distance,radian,angle,height;
cout<<"Enter the distance from the base of the tree (in feets): ";
cin>>distance;
cout<<"Enter the angle of elevation (in degrees): ";
cin>>angle;
radian=angle/57.2958;
height=distance*tan(radian);
cout<<"The height of the tree is: "<<height;
return 0;
}


