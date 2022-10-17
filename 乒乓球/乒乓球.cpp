#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
void showMatch(string s,int mp){
	int w=0,l=0;
	for (int i=0;s[i]!='E';i++){
		if (s[i]=='W'){
			w++;
		}else{
			l++;
		}
		if (w>=mp && w-l>=2 || l>=mp && l-w>=2){
			printf("%d:%d\n",w,l);
			w=0;
			l=0;
		}
	}
	printf("%d:%d\n",w,l);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	string s,a;
	while (cin>>a){
		s+=a;
	}
	showMatch(s,11);
	printf("\n");
	showMatch(s,21);
	return 0;
}

