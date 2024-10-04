#include<iostream>
#include<string>
using namespace std;
string calculatePoolState(float V, float P1, float P2,float H);
main()
{
	float V,P1,P2,H;
	string result;
	cout << " Enter Volume of the pool in liters: ";
	cin >> V;
	cout << " Enter flow rate of the first pipe per hour: ";
	cin >> P1;
	cout << " Enter the flow rate of second pipe per hour: ";
	cin >> P2;
	cout << " Enter the hours in which the worker is absent: ";
	cin >> H;
	result=calculatePoolState(V,P1,P2,H);
	cout<<result;
}


string calculatePoolState(float V, float P1, float P2,float H)
{
	string output;
	float pipe1,pipe2,flowrate,percentagerate,overflow;
	flowrate=(P1*H)+(P2*H);
	percentagerate=flowrate/V*100;
	pipe1=(P1*H)/flowrate*100;
	pipe2=(P2*H)/flowrate*100;
	overflow=flowrate-V;
	if(flowrate<V)
{
	output="The pool is "+to_string(percentagerate)+" % full.pipe1: "+to_string(pipe1)+" %.pipe2: "+to_string(pipe2)+" %";
	return output;
}
	if(flowrate>V)
{
	output="for "+to_string(H)+"hours the pool overflows with "+to_string(overflow)+" liters";
	return output;
}
}


















