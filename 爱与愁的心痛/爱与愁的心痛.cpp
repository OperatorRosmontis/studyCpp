#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n,m,a[100001],min=100000,t=0;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=1;i<=n-m+1;i++){
       for (int j=1;j<=m;j++){
           t+=a[i+j-1];
       }
        if (t<min){
        	min=t;
		}
        t=0;
    }
    printf("%d",min);
	return 0;
}

