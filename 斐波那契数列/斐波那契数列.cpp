#include<bits/stdc++.h>
using namespace std;
// part:define function
int fibonacci(int n){
	if (n==1 || n==2){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2); 
}
int main(){
	// part:define variable
	int m;
	// part:enter m
	cin>>m;
	// part:define array
	int f[m+1];
	// part:enter f
	for (int i=0;i<m;i++){
		cin>>f[i];
	}
	// part:output result
	cout<<endl;
	for (int i=0;i<m;i++){
		cout<<fibonacci(f[i]);
		if (i!=m-1){
			cout<<endl;
		}
	}
	return 0;
}

