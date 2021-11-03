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
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using u64 = uint64_t;
using u128 = __uint128_t;

u64 binpow(u64 a,u64 b,u64 c){
	u64 res=1;
	a%=c;
	while(b>0){
		if(b&1)	res=(u128)res*a%c;
		a=(u128)a*a%c;
		b>>=1;
	}
	return res%c;
}

int main(){
	
  ll x,y,z;
  cin>>x>>y>>z;
  binpow(x,y,z);
	return 0;
}
