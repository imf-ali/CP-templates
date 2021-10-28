#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b)	for(int i=a;i<=b;i++)
#define mod 10000007

ll binpow(ll a,ll b,ll c){
	ll res=1;
	while(b>0){
		if(b&1)	res=((res%c)*(a%c))%c;
		a=((a%c)*(a%c))%c;
		b>>=1;
	}
	return res%c;
}

ll gcd(ll a,ll b){
	return b ? gcd(b,a%b) : a;
}

ll lcm(ll a,ll b){
	return a/gcd(a,b) * b;
}
	
int main(){

	ll t;
	cin>>t;

	while(t--){

		ll a;
		ll b;

		cin>>a>>b;

		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
	

	return 0;
}