#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n;
    cin>>n;
    int Map[n*n+10];
    int Full;
    bool Key=false;
    int p=0;
    while (cin>>Full)
    {
        int i;
        for (i=p;i<p+Full;i++)
            Map[i]=Key;
        p=i;
        Key=!Key;
    }
    p=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d",Map[p]);
            p++;
        }
        puts(" ");
    }
	return 0;
}

