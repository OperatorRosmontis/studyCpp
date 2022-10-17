#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define maxN 1005
int n,ans=0;
int a[maxN],f[maxN];
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		f[i]=1;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<i;j++){
			if (a[i]>a[j]){
				f[i]=max(f[i],f[j]+1); 
			}
		}
	}
	for (int i=1;i<=n;i++){
		ans=max(ans,f[i]);
	}
	printf("%d",ans);
	return 0;
}

