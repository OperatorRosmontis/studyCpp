#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int a;
	double b;
	scanf("%d",&a);
	b=(a<=150?a*0.4463:150*0.4463+(a<=400?(a-150)*0.4663:(400-150)*0.4663+(a-400)*0.5663));
	printf("%.1lf",b);
	return 0;
}

