#include<bits/stdc++.h>
using namespace std;
double costCalc(int a){
	double cost;
	if (a<=70){
		cost=0.1;
	}
	if (a>70){
		cost=0.1*ceil(a*1.0/70);
	}
	return cost;
}
int main(){
	// part:define variable
	int n;
	double result=0;
	// part:enter n
	cin>>n;
	// part:define array
	int length[n+1];
	double cost[n+1];
	// part:enter message length
	for (int i=0;i<n;i++){
		cin>>length[i];
	}
	// part:calculation costs
	for (int i=0;i<n;i++){
		cost[i]=costCalc(length[i]);
	}
	// part:calculation result
	for (int i=0;i<n;i++){
		result+=cost[i];
	}
	// part:output result
	cout<<endl;
	cout<<fixed<<setprecision(1)<<result;
	return 0;
}

