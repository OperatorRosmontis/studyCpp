#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll x,y;
int gcd(ll a,ll b){
	if (b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	ll ans=0;
	scanf("%lld%lld",&x,&y);
	for (ll i=1;i<=sqrt(x*y);i++){
		if (x*y%i==0 && gcd(i,x*y/i)==x){
			ans++;
		}
	}
	if (x==y){
		ans--;
	}
	printf("%lld",ans);
	return 0;
}

