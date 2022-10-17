#include<iostream>
#include<cstdio>
using namespace std;
#define maxN 1005
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int t,m;
	scanf("%d%d",&t,&m);
	int value[maxN],time[maxN];
	int herbList[m+1][t+1]={{0}};
	for (int i=1;i<=m;i++){
		scanf("%d%d",&time[i],&value[i]);
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=t;j++){
			if (j<time[i]){
				herbList[i][j]=herbList[i-1][j];
			}else{
				herbList[i][j]=max(herbList[i-1][j-time[i]]+value[i],herbList[i-1][j]);
			}
		}
	} 
	printf("%d",herbList[m][t]);
	return 0;
}


