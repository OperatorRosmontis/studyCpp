#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int height[10],h,s;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	for (int i=0;i<10;i++){
		scanf("%d",&height[i]);
	}
	scanf("%d",&h);
	h+=30;
	for (int i=0;i<10;i++){
		s+=!(h<height[i]);
	}
	printf("%d",s);
	return 0;
}

